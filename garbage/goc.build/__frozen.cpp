// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "_collections_abc", 8181316, 28905 },
        { "_compression", 8210221, 4087 },
        { "_weakrefset", 8214308, 7425 },
        { "abc", 8221733, 6414 },
        { "base64", 8228147, 16951 },
        { "bz2", 8245098, 11144 },
        { "codecs", 8256242, 33861 },
        { "collections", 8290103, -46573 },
        { "collections.abc", 8181316, 28905 },
        { "copyreg", 8336676, 4207 },
        { "dis", 8340883, 15168 },
        { "encodings", 8356051, -3910 },
        { "encodings.aliases", 8359961, 6259 },
        { "encodings.ascii", 8366220, 1847 },
        { "encodings.base64_codec", 8368067, 2386 },
        { "encodings.big5", 8370453, 1407 },
        { "encodings.big5hkscs", 8371860, 1417 },
        { "encodings.bz2_codec", 8373277, 3248 },
        { "encodings.charmap", 8376525, 2900 },
        { "encodings.cp037", 8379425, 2392 },
        { "encodings.cp1006", 8381817, 2468 },
        { "encodings.cp1026", 8384285, 2396 },
        { "encodings.cp1125", 8386681, 8089 },
        { "encodings.cp1140", 8394770, 2382 },
        { "encodings.cp1250", 8397152, 2419 },
        { "encodings.cp1251", 8399571, 2416 },
        { "encodings.cp1252", 8401987, 2419 },
        { "encodings.cp1253", 8404406, 2432 },
        { "encodings.cp1254", 8406838, 2421 },
        { "encodings.cp1255", 8409259, 2440 },
        { "encodings.cp1256", 8411699, 2418 },
        { "encodings.cp1257", 8414117, 2426 },
        { "encodings.cp1258", 8416543, 2424 },
        { "encodings.cp273", 8418967, 2378 },
        { "encodings.cp424", 8421345, 2422 },
        { "encodings.cp437", 8423767, 7806 },
        { "encodings.cp500", 8431573, 2392 },
        { "encodings.cp65001", 8433965, 1646 },
        { "encodings.cp720", 8435611, 2489 },
        { "encodings.cp737", 8438100, 8128 },
        { "encodings.cp775", 8446228, 7836 },
        { "encodings.cp850", 8454064, 7467 },
        { "encodings.cp852", 8461531, 7844 },
        { "encodings.cp855", 8469375, 8097 },
        { "encodings.cp856", 8477472, 2454 },
        { "encodings.cp857", 8479926, 7449 },
        { "encodings.cp858", 8487375, 7437 },
        { "encodings.cp860", 8494812, 7785 },
        { "encodings.cp861", 8502597, 7800 },
        { "encodings.cp862", 8510397, 7989 },
        { "encodings.cp863", 8518386, 7800 },
        { "encodings.cp864", 8526186, 7946 },
        { "encodings.cp865", 8534132, 7800 },
        { "encodings.cp866", 8541932, 8133 },
        { "encodings.cp869", 8550065, 7826 },
        { "encodings.cp874", 8557891, 2520 },
        { "encodings.cp875", 8560411, 2389 },
        { "encodings.cp932", 8562800, 1409 },
        { "encodings.cp949", 8564209, 1409 },
        { "encodings.cp950", 8565618, 1409 },
        { "encodings.euc_jis_2004", 8567027, 1423 },
        { "encodings.euc_jisx0213", 8568450, 1423 },
        { "encodings.euc_jp", 8569873, 1411 },
        { "encodings.euc_kr", 8571284, 1411 },
        { "encodings.gb18030", 8572695, 1413 },
        { "encodings.gb2312", 8574108, 1411 },
        { "encodings.gbk", 8575519, 1405 },
        { "encodings.hex_codec", 8576924, 2373 },
        { "encodings.hp_roman8", 8579297, 2593 },
        { "encodings.hz", 8581890, 1403 },
        { "encodings.idna", 8583293, 5687 },
        { "encodings.iso2022_jp", 8588980, 1424 },
        { "encodings.iso2022_jp_1", 8590404, 1428 },
        { "encodings.iso2022_jp_2", 8591832, 1428 },
        { "encodings.iso2022_jp_2004", 8593260, 1434 },
        { "encodings.iso2022_jp_3", 8594694, 1428 },
        { "encodings.iso2022_jp_ext", 8596122, 1432 },
        { "encodings.iso2022_kr", 8597554, 1424 },
        { "encodings.iso8859_1", 8598978, 2391 },
        { "encodings.iso8859_10", 8601369, 2396 },
        { "encodings.iso8859_11", 8603765, 2490 },
        { "encodings.iso8859_13", 8606255, 2399 },
        { "encodings.iso8859_14", 8608654, 2417 },
        { "encodings.iso8859_15", 8611071, 2396 },
        { "encodings.iso8859_16", 8613467, 2398 },
        { "encodings.iso8859_2", 8615865, 2391 },
        { "encodings.iso8859_3", 8618256, 2398 },
        { "encodings.iso8859_4", 8620654, 2391 },
        { "encodings.iso8859_5", 8623045, 2392 },
        { "encodings.iso8859_6", 8625437, 2436 },
        { "encodings.iso8859_7", 8627873, 2399 },
        { "encodings.iso8859_8", 8630272, 2430 },
        { "encodings.iso8859_9", 8632702, 2391 },
        { "encodings.johab", 8635093, 1409 },
        { "encodings.koi8_r", 8636502, 2443 },
        { "encodings.koi8_t", 8638945, 2354 },
        { "encodings.koi8_u", 8641299, 2429 },
        { "encodings.kz1048", 8643728, 2406 },
        { "encodings.latin_1", 8646134, 1859 },
        { "encodings.mac_arabic", 8647993, 7700 },
        { "encodings.mac_centeuro", 8655693, 2430 },
        { "encodings.mac_croatian", 8658123, 2438 },
        { "encodings.mac_cyrillic", 8660561, 2428 },
        { "encodings.mac_farsi", 8662989, 2372 },
        { "encodings.mac_greek", 8665361, 2412 },
        { "encodings.mac_iceland", 8667773, 2431 },
        { "encodings.mac_latin2", 8670204, 2572 },
        { "encodings.mac_roman", 8672776, 2429 },
        { "encodings.mac_romanian", 8675205, 2439 },
        { "encodings.mac_turkish", 8677644, 2432 },
        { "encodings.mbcs", 8680076, 1658 },
        { "encodings.oem", 8681734, 1471 },
        { "encodings.palmos", 8683205, 2419 },
        { "encodings.ptcp154", 8685624, 2513 },
        { "encodings.punycode", 8688137, 6380 },
        { "encodings.quopri_codec", 8694517, 2406 },
        { "encodings.raw_unicode_escape", 8696923, 1732 },
        { "encodings.rot_13", 8698655, 2992 },
        { "encodings.shift_jis", 8701647, 1417 },
        { "encodings.shift_jis_2004", 8703064, 1427 },
        { "encodings.shift_jisx0213", 8704491, 1427 },
        { "encodings.tis_620", 8705918, 2481 },
        { "encodings.undefined", 8708399, 2126 },
        { "encodings.unicode_escape", 8710525, 1712 },
        { "encodings.unicode_internal", 8712237, 1722 },
        { "encodings.utf_16", 8713959, 4796 },
        { "encodings.utf_16_be", 8718755, 1597 },
        { "encodings.utf_16_le", 8720352, 1597 },
        { "encodings.utf_32", 8721949, 4689 },
        { "encodings.utf_32_be", 8726638, 1490 },
        { "encodings.utf_32_le", 8728128, 1490 },
        { "encodings.utf_7", 8729618, 1518 },
        { "encodings.utf_8", 8731136, 1577 },
        { "encodings.utf_8_sig", 8732713, 4479 },
        { "encodings.uu_codec", 8737192, 3188 },
        { "encodings.zlib_codec", 8740380, 3086 },
        { "enum", 8743466, 24225 },
        { "functools", 8767691, 23912 },
        { "genericpath", 8791603, 3711 },
        { "heapq", 8795314, 14325 },
        { "importlib", 8809639, -3695 },
        { "importlib._bootstrap", 8813334, 29141 },
        { "importlib._bootstrap_external", 8842475, 41781 },
        { "importlib.machinery", 8884256, 935 },
        { "inspect", 8885191, 79995 },
        { "io", 8965186, 3372 },
        { "keyword", 8968558, 1772 },
        { "linecache", 8970330, 3752 },
        { "locale", 8974082, 34518 },
        { "ntpath", 9008600, 12967 },
        { "opcode", 9021567, 5341 },
        { "operator", 9026908, 13863 },
        { "os", 9040771, 29656 },
        { "quopri", 9070427, 5734 },
        { "re", 9076161, 13767 },
        { "reprlib", 9089928, 5313 },
        { "sre_compile", 9095241, 15166 },
        { "sre_constants", 9110407, 6254 },
        { "sre_parse", 9116661, 21320 },
        { "stat", 9137981, 3836 },
        { "stringprep", 9141817, 9995 },
        { "struct", 9151812, 297 },
        { "threading", 9152109, 37298 },
        { "token", 9189407, 3562 },
        { "tokenize", 9192969, 17794 },
        { "traceback", 9210763, 19586 },
        { "types", 9230349, 8937 },
        { "warnings", 9239286, 13912 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
