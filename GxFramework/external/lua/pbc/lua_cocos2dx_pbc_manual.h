#ifndef __LUA_LuaUserGlobalMethod_H_
#define __LUA_LuaUserGlobalMethod_H_

#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

TOLUA_API int  register_pbc_module(lua_State* L);

#endif // __LUA_LuaUserGlobalMethod_H_