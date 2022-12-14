
// Core Includes
#include <editor\gs_editor.h>

GS_API_DECL void 
vs_editor_init(void* app)
{
    // Super
    gs_editor_init(app); 
}

GS_API_DECL void
vs_editor_update(void* app)
{
    // Super
    gs_editor_update(app);
}

GS_API_DECL void
vs_editor_shutdown(void* app)
{
    // Super
    gs_editor_shutdown(app);
}

GS_API_DECL int32_t
main(int32_t argc, char** argv)
{
    // Create gs instance
    gs_t* inst = gs_create((gs_app_desc_t) {
        .user_data = gs_core_os_malloc_init(sizeof(gs_editor_t)),
        .window_width = 800,
        .window_height = 600,
        .window_title = gs_to_str(vs_editor),
        .init = vs_editor_init,
        .update = vs_editor_update,
        .shutdown = vs_editor_shutdown
    });

    // Main loop
    while (gs_app()->is_running) {
        gs_frame();
    }

    // Shutdown
    gs_free(inst);

    return 0;
}

GS_API_DECL const char* 
gs_app_dll_path()
{ 
    #if GS_DEBUG
            const char* path = gs_platform_dir_exists(gs_to_str(bin/vs)) ? 
                gs_to_str(bin/vs/vs_d) : 
                gs_to_str(../vs/vs_d);
    #else
            const char* path = gs_platform_dir_exists(gs_to_str(bin/vs)) ? 
                gs_to_str(bin/vs/vs) : 
                gs_to_str(../vs/vs);
    #endif
            
    return path;
}

GS_API_DECL const char*
gs_editor_dll_path()
{
    #if GS_DEBUG
        const char* path = gs_platform_dir_exists(gs_to_str(bin/editor)) ? 
            gs_to_str(bin/editor/vs_d) : 
            gs_to_str(vs_d);
    #else
        const char* path = gs_platform_dir_exists(gs_to_str(bin/editor)) ? 
            gs_to_str(bin/editor/vs) : 
            gs_to_str(vs);
    #endif
            
    return path;
} 
