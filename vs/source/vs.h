#ifndef vs_H
#define vs_H

// Core Includes
#include <core/gs_core.h>

_introspect()
typedef struct vs_s
{ 
    gs_core_base(gs_core_app_t); 

    _vtable(
        _override: init     = vs_init;
        _override: update   = vs_update;
        _override: shutdown = vs_shutdown;
        _override: render   = vs_render;
    ) 

    gs_core_entity_t ent;
    gs_core_asset_handle_t mat_hndl;

} vs_t; 

GS_API_DECL void 
vs_init(); 

GS_API_DECL void 
vs_update(); 

GS_API_DECL void 
vs_shutdown(); 

GS_API_DECL void 
vs_render(gs_command_buffer_t* cb); 

// Components/Systems 

#endif
