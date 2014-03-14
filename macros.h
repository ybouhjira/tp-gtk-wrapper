#ifndef MACROS_H
#define MACROS_H

#define func_head(type, name) \
         type variadic_##name(variadic_type_##name x)

#define func_declare(type, name, ...) \
        typedef struct {            \
                    __VA_ARGS__       ;  \
                } variadic_type_##name;     \
    func_head(type, name);

#define param_default(name, value) name = x.name ? x.name : (value);
#define varad_link(name,...) \
        variadic_##name((variadic_type_##name) {__VA_ARGS__})

#endif // MACROS_H
