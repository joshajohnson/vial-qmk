#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT_all( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E,    K0F, K0G, K0H, \
    K10,      K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E,    K1F, K1G, K1H, \
    K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      K2E,                   \
    K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3E,         K3G,      \
    K40, K41, K42,                     K47,                K4B,      K4D, K4E,    K4F, K4G, K4H  \
) { \
    {  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H }, \
    {  K10, ___, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H }, \
    {  K20, ___, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, ___, K2E, ___, ___, ___ }, \
    {  K30, ___, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, ___, K3D, K3E, ___, K3G, ___ }, \
    {  K40, K41, K42, ___, ___, ___, ___, K47, ___, ___, ___, K4B, ___, K4D, K4E, K4F, K4G, K4H }  \
}
