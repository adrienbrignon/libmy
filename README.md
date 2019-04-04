# Implementations

### <stdlib.h>
|      Base     |    Implementation    |        Status       |
|:-------------:|:--------------------:|:-------------------:|
|      atof     |      **my_atof**     |         :x:         |
|      atoi     |      **my_atoi**     |  :heavy_check_mark: |
|      atol     |      **my_atol**     |  :heavy_check_mark: |
|     atoll     |     **my_atoll**     |  :heavy_check_mark: |
|     strtod    |     **my_strtod**    |         :x:         |
|     strtof    |     **my_strtof**    |         :x:         |
|     strtol    |     **my_strtol**    |         :x:         |
|    strtold    |    **my_strtold**    |         :x:         |
|    strtoll    |    **my_strtoll**    |         :x:         |
|    strtoul    |    **my_strtoul**    |         :x:         |
|    strtoull   |    **my_strtoull**   |         :x:         |
|      rand     |      **my_rand**     |         :x:         |
|     srand     |     **my_srand**     |         :x:         |
|     calloc    |     **my_calloc**    |      :warning:      |
|      free     |      **my_free**     |      :warning:      |
|     malloc    |     **my_malloc**    |      :warning:      |
|    realloc    |    **my_realloc**    |      :warning:      |
|     abort     |     **my_abort**     |         :x:         |
|     atexit    |     **my_atexit**    |         :x:         |
| at_quick_exit | **my_at_quick_exit** |         :x:         |
|      exit     |      **my_exit**     |         :x:         |
|     getenv    |     **my_getenv**    |  :heavy_check_mark: |
|   quick_exit  |   **my_quick_exit**  |         :x:         |
|     system    |     **my_system**    |         :x:         |
|    bsearch    |    **my_bsearch**    |         :x:         |
|     qsort     |     **my_qsort**     |      :warning:      |
|      abs      |      **my_abs**      |  :heavy_check_mark: |
|      div      |      **my_div**      |  :heavy_check_mark: |
|      labs     |      **my_labs**     |  :heavy_check_mark: |
|      ldiv     |      **my_ldiv**     |  :heavy_check_mark: |
|     llabs     |     **my_llabs**     |  :heavy_check_mark: |
|     lldiv     |     **my_lldiv**     |  :heavy_check_mark: |
|     mblen     |     **my_mblen**     |         :x:         |
|     mbtowc    |     **my_mbtowc**    |         :x:         |
|     wctomb    |     **my_wctomb**    |         :x:         |
|    mbstowcs   |    **my_mbstowcs**   |         :x:         |
|    wcstombs   |    **my_wcstombs**   |         :x:         |
|               |      **my_itoa**     | :large_blue_circle: |
|               |      **my_ltoa**     | :large_blue_circle: |
|               |     **my_lltoa**     | :large_blue_circle: |
|               |     **my_ultoa**     | :large_blue_circle: |

### <stdbool.h>
|  Base |   Implementation  |       Status       |
|:-----:|:-----------------:|:------------------:|
|  bool |   **my_bool_t**   | :heavy_check_mark: |
| false |   **my_false**    | :heavy_check_mark: |
|  true |    **my_true**    | :heavy_check_mark: |

### <iso646.h>
|  Base  | Implementation |       Status       |
|:------:|:--------------:|:------------------:|
|   and  |   **my_and**   | :heavy_check_mark: |
| and_eq |   **and_eq**   | :heavy_check_mark: |
| bitand |  **my_bitand** | :heavy_check_mark: |
|  bitor |  **my_bitor**  | :heavy_check_mark: |
|  compl |  **my_compl**  | :heavy_check_mark: |
|   not  |   **my_not**   | :heavy_check_mark: |
| not_eq |  **my_not_eq** | :heavy_check_mark: |
|   or   |    **my_or**   | :heavy_check_mark: |
|  or_eq |  **my_or_eq**  | :heavy_check_mark: |
|   xor  |   **my_xor**   | :heavy_check_mark: |
| xor_eq |  **my_xor_eq** | :heavy_check_mark: |

### <math.h>
|    Base    |   Implementation  |        Status       |
|:----------:|:-----------------:|:-------------------:|
|     cos    |     **my_cos**    |         :x:         |
|     sin    |     **my_sin**    |         :x:         |
|     tan    |     **my_tan**    |         :x:         |
|    acos    |    **my_acos**    |         :x:         |
|    asin    |    **my_asin**    |         :x:         |
|    atan    |    **my_atan**    |         :x:         |
|    atan2   |    **my_atan2**   |         :x:         |
|    cosh    |    **my_cosh**    |         :x:         |
|    sinh    |    **my_sinh**    |         :x:         |
|    tanh    |    **my_tanh**    |         :x:         |
|    acosh   |    **my_acosh**   |         :x:         |
|    asinh   |    **my_asinh**   |         :x:         |
|    atanh   |    **my_atanh**   |         :x:         |
|     exp    |     **my_exp**    |         :x:         |
|    frexp   |    **my_frexp**   |         :x:         |
|    ldexp   |    **my_ldexp**   |  :heavy_check_mark: |
|     log    |     **my_log**    |         :x:         |
|    log10   |    **my_log10**   |         :x:         |
|    modf    |    **my_modf**    |         :x:         |
|    exp2    |    **my_exp2**    |         :x:         |
|    expm1   |    **my_expm1**   |         :x:         |
|    ilogb   |    **my_ilogb**   |         :x:         |
|    log1p   |    **my_log1p**   |         :x:         |
|    log2    |    **my_log2**    |         :x:         |
|    logb    |    **my_logb**    |         :x:         |
|   scalbn   |   **my_scalbn**   |         :x:         |
|   scalbln  |   **my_scalbln**  |         :x:         |
|     pow    |     **my_pow**    |  :heavy_check_mark: |
|    sqrt    |    **my_sqrt**    |  :heavy_check_mark: |
|    cbrt    |    **my_cbrt**    |         :x:         |
|    hypot   |    **my_hypot**   |         :x:         |
|     erf    |     **my_erf**    |         :x:         |
|    erfc    |    **my_erfc**    |         :x:         |
|   tgamma   |   **my_tgamma**   |         :x:         |
|   lgamma   |   **my_lgamma**   |         :x:         |
|    ceil    |    **my_ceil**    |  :heavy_check_mark: |
|    floor   |    **my_floor**   |  :heavy_check_mark: |
|    fmod    |    **my_fmod**    |  :heavy_check_mark: |
|    trunc   |    **my_trunc**   |  :heavy_check_mark: |
|    round   |    **my_round**   |  :heavy_check_mark: |
|   lround   |   **my_lround**   |         :x:         |
|   llround  |   **my_llround**  |         :x:         |
|    rint    |    **my_rint**    |         :x:         |
|    lrint   |    **my_lrint**   |         :x:         |
|   llrint   |   **my_llrint**   |         :x:         |
|  nearbyint |  **my_nearbyint** |         :x:         |
|  remainder |  **my_remainder** |         :x:         |
|   remquo   |   **my_remquo**   |         :x:         |
|  copysign  |  **my_copysign**  |  :heavy_check_mark: |
|     nan    |     **my_nan**    |         :x:         |
|  nextafter |  **my_nextafter** |         :x:         |
| nexttoward | **my_nexttoward** |         :x:         |
|    fdim    |    **my_fdim**    |  :heavy_check_mark: |
|    fmax    |    **my_fmax**    |  :heavy_check_mark: |
|    fmin    |    **my_fmin**    |  :heavy_check_mark: |
|    fabs    |    **my_fabs**    |  :heavy_check_mark: |
|     fma    |     **my_fma**    |  :heavy_check_mark: |
|            |   **my_isprime**  | :large_blue_circle: |

### <ctype.h>
|   Base   |  Implementation |       Status       |
|:--------:|:---------------:|:------------------:|
|  isalnum |  **my_isalnum** | :heavy_check_mark: |
|  isalpha |  **my_isalpha** | :heavy_check_mark: |
|  isblank |  **my_isblank** | :heavy_check_mark: |
|  iscntrl |  **my_iscntrl** | :heavy_check_mark: |
|  isdigit |  **my_isdigit** | :heavy_check_mark: |
|  isgraph |  **my_isgraph** | :heavy_check_mark: |
|  islower |  **my_islower** | :heavy_check_mark: |
|  isprint |  **my_isprint** | :heavy_check_mark: |
|  ispunct |  **my_ispunct** | :heavy_check_mark: |
|  isspace |  **my_isspace** | :heavy_check_mark: |
|  isupper |  **my_isupper** | :heavy_check_mark: |
| isxdigit | **my_isxdigit** | :heavy_check_mark: |
|  tolower |  **my_tolower** | :heavy_check_mark: |
|  toupper |  **my_toupper** | :heavy_check_mark: |


### <string.h>

|   Base   |  Implementation |        Status       |
|:--------:|:---------------:|:-------------------:|
|  memcpy  |  **my_memcpy**  |  :heavy_check_mark: |
|  memmove |  **my_memmove** |  :heavy_check_mark: |
|  strcpy  |  **my_strcpy**  |  :heavy_check_mark: |
|  strncpy |  **my_strncpy** |  :heavy_check_mark: |
|  strcat  |  **my_strcat**  |  :heavy_check_mark: |
|  strncat |  **my_strncat** |  :heavy_check_mark: |
|  memcmp  |  **my_memcmp**  |  :heavy_check_mark: |
|  strcmp  |  **my_strcmp**  |  :heavy_check_mark: |
|  strncmp |  **my_strncmp** |  :heavy_check_mark: |
|  strcoll |  **my_strcoll** |         :x:         |
|  strxfrm |  **my_strxfrm** |         :x:         |
|  memchr  |  **my_memchr**  |  :heavy_check_mark: |
|  strchr  |  **my_strchr**  |  :heavy_check_mark: |
|  strrchr |  **my_strrchr** |  :heavy_check_mark: |
|  strspn  |  **my_strspn**  |  :heavy_check_mark: |
|  strcspn |  **my_strcspn** |  :heavy_check_mark: |
|  strpbrk |   **strpbrk**   |  :heavy_check_mark: |
|  strstr  |  **my_strstr**  |  :heavy_check_mark: |
|  strtok  |  **my_strtok**  |  :heavy_check_mark: |
|  memset  |  **my_memset**  |  :heavy_check_mark: |
| strerror | **my_strerror** |         :x:         |
|  strlen  |  **my_strlen**  |  :heavy_check_mark: |
|  strdup  |  **my_strdup**  |  :heavy_check_mark: |
|          |  **my_strlwr**  | :large_blue_circle: |
|          |  **my_strupr**  | :large_blue_circle: |
