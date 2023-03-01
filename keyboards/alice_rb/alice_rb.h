#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT_all( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I,  \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E,      K1G, K1H, K1I,  \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D,                           \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E,           K3H,       \
         K41,      K43,      K45, K46,      K48,      K4A,                K4E,      K4G, K4H, K4I   \
) { \
    {  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I }, \
    {  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, ___, K1G, K1H, K1I }, \
    {  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, ___, ___, ___, ___, ___ }, \
    {  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, ___, ___, K3H, ___ }, \
    {  ___, K41, ___, K43, ___, K45, K46, ___, K48, ___, K4A, ___, ___, ___, K4E, ___, K4G, K4H, K4I }  \
}
