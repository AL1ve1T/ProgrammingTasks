#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

static void wait_thread( void )
{
    time_t start_time = time( NULL );

    while( time( NULL ) == start_time )
        ; /* do nothing except chew CPU slices for up to one second. */
}

static void* thread_func( void* vptr_args )
{
    unsigned i;

    for( i = 0; i < 20; ++i )
    {
        fputs( "b\n", stderr );
        wait_thread();
    }

    return NULL;
}

int main( void )
{
    unsigned i;
    pthread_t thread;

    if ( pthread_create( &thread, NULL, thread_func, NULL ) )
        return EXIT_FAILURE;

    for( i = 0; i < 20; ++i )
    {
        puts( "a\n" );
        wait_thread();
    }

    if ( pthread_join( thread, NULL ) )
        return EXIT_FAILURE;

    return EXIT_SUCCESS;
}