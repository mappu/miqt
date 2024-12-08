package qscintilla

/*

#include "gen_qsciscintillabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QsciScintillaBase__ int

const (
	QsciScintillaBase__SCI_START                                     QsciScintillaBase__ = 2000
	QsciScintillaBase__SCI_OPTIONAL_START                            QsciScintillaBase__ = 3000
	QsciScintillaBase__SCI_LEXER_START                               QsciScintillaBase__ = 4000
	QsciScintillaBase__SCI_ADDTEXT                                   QsciScintillaBase__ = 2001
	QsciScintillaBase__SCI_ADDSTYLEDTEXT                             QsciScintillaBase__ = 2002
	QsciScintillaBase__SCI_INSERTTEXT                                QsciScintillaBase__ = 2003
	QsciScintillaBase__SCI_CLEARALL                                  QsciScintillaBase__ = 2004
	QsciScintillaBase__SCI_CLEARDOCUMENTSTYLE                        QsciScintillaBase__ = 2005
	QsciScintillaBase__SCI_GETLENGTH                                 QsciScintillaBase__ = 2006
	QsciScintillaBase__SCI_GETCHARAT                                 QsciScintillaBase__ = 2007
	QsciScintillaBase__SCI_GETCURRENTPOS                             QsciScintillaBase__ = 2008
	QsciScintillaBase__SCI_GETANCHOR                                 QsciScintillaBase__ = 2009
	QsciScintillaBase__SCI_GETSTYLEAT                                QsciScintillaBase__ = 2010
	QsciScintillaBase__SCI_REDO                                      QsciScintillaBase__ = 2011
	QsciScintillaBase__SCI_SETUNDOCOLLECTION                         QsciScintillaBase__ = 2012
	QsciScintillaBase__SCI_SELECTALL                                 QsciScintillaBase__ = 2013
	QsciScintillaBase__SCI_SETSAVEPOINT                              QsciScintillaBase__ = 2014
	QsciScintillaBase__SCI_GETSTYLEDTEXT                             QsciScintillaBase__ = 2015
	QsciScintillaBase__SCI_CANREDO                                   QsciScintillaBase__ = 2016
	QsciScintillaBase__SCI_MARKERLINEFROMHANDLE                      QsciScintillaBase__ = 2017
	QsciScintillaBase__SCI_MARKERDELETEHANDLE                        QsciScintillaBase__ = 2018
	QsciScintillaBase__SCI_GETUNDOCOLLECTION                         QsciScintillaBase__ = 2019
	QsciScintillaBase__SCI_GETVIEWWS                                 QsciScintillaBase__ = 2020
	QsciScintillaBase__SCI_SETVIEWWS                                 QsciScintillaBase__ = 2021
	QsciScintillaBase__SCI_POSITIONFROMPOINT                         QsciScintillaBase__ = 2022
	QsciScintillaBase__SCI_POSITIONFROMPOINTCLOSE                    QsciScintillaBase__ = 2023
	QsciScintillaBase__SCI_GOTOLINE                                  QsciScintillaBase__ = 2024
	QsciScintillaBase__SCI_GOTOPOS                                   QsciScintillaBase__ = 2025
	QsciScintillaBase__SCI_SETANCHOR                                 QsciScintillaBase__ = 2026
	QsciScintillaBase__SCI_GETCURLINE                                QsciScintillaBase__ = 2027
	QsciScintillaBase__SCI_GETENDSTYLED                              QsciScintillaBase__ = 2028
	QsciScintillaBase__SCI_CONVERTEOLS                               QsciScintillaBase__ = 2029
	QsciScintillaBase__SCI_GETEOLMODE                                QsciScintillaBase__ = 2030
	QsciScintillaBase__SCI_SETEOLMODE                                QsciScintillaBase__ = 2031
	QsciScintillaBase__SCI_STARTSTYLING                              QsciScintillaBase__ = 2032
	QsciScintillaBase__SCI_SETSTYLING                                QsciScintillaBase__ = 2033
	QsciScintillaBase__SCI_GETBUFFEREDDRAW                           QsciScintillaBase__ = 2034
	QsciScintillaBase__SCI_SETBUFFEREDDRAW                           QsciScintillaBase__ = 2035
	QsciScintillaBase__SCI_SETTABWIDTH                               QsciScintillaBase__ = 2036
	QsciScintillaBase__SCI_GETTABWIDTH                               QsciScintillaBase__ = 2121
	QsciScintillaBase__SCI_SETCODEPAGE                               QsciScintillaBase__ = 2037
	QsciScintillaBase__SCI_MARKERDEFINE                              QsciScintillaBase__ = 2040
	QsciScintillaBase__SCI_MARKERSETFORE                             QsciScintillaBase__ = 2041
	QsciScintillaBase__SCI_MARKERSETBACK                             QsciScintillaBase__ = 2042
	QsciScintillaBase__SCI_MARKERADD                                 QsciScintillaBase__ = 2043
	QsciScintillaBase__SCI_MARKERDELETE                              QsciScintillaBase__ = 2044
	QsciScintillaBase__SCI_MARKERDELETEALL                           QsciScintillaBase__ = 2045
	QsciScintillaBase__SCI_MARKERGET                                 QsciScintillaBase__ = 2046
	QsciScintillaBase__SCI_MARKERNEXT                                QsciScintillaBase__ = 2047
	QsciScintillaBase__SCI_MARKERPREVIOUS                            QsciScintillaBase__ = 2048
	QsciScintillaBase__SCI_MARKERDEFINEPIXMAP                        QsciScintillaBase__ = 2049
	QsciScintillaBase__SCI_SETMARGINTYPEN                            QsciScintillaBase__ = 2240
	QsciScintillaBase__SCI_GETMARGINTYPEN                            QsciScintillaBase__ = 2241
	QsciScintillaBase__SCI_SETMARGINWIDTHN                           QsciScintillaBase__ = 2242
	QsciScintillaBase__SCI_GETMARGINWIDTHN                           QsciScintillaBase__ = 2243
	QsciScintillaBase__SCI_SETMARGINMASKN                            QsciScintillaBase__ = 2244
	QsciScintillaBase__SCI_GETMARGINMASKN                            QsciScintillaBase__ = 2245
	QsciScintillaBase__SCI_SETMARGINSENSITIVEN                       QsciScintillaBase__ = 2246
	QsciScintillaBase__SCI_GETMARGINSENSITIVEN                       QsciScintillaBase__ = 2247
	QsciScintillaBase__SCI_SETMARGINCURSORN                          QsciScintillaBase__ = 2248
	QsciScintillaBase__SCI_GETMARGINCURSORN                          QsciScintillaBase__ = 2249
	QsciScintillaBase__SCI_STYLECLEARALL                             QsciScintillaBase__ = 2050
	QsciScintillaBase__SCI_STYLESETFORE                              QsciScintillaBase__ = 2051
	QsciScintillaBase__SCI_STYLESETBACK                              QsciScintillaBase__ = 2052
	QsciScintillaBase__SCI_STYLESETBOLD                              QsciScintillaBase__ = 2053
	QsciScintillaBase__SCI_STYLESETITALIC                            QsciScintillaBase__ = 2054
	QsciScintillaBase__SCI_STYLESETSIZE                              QsciScintillaBase__ = 2055
	QsciScintillaBase__SCI_STYLESETFONT                              QsciScintillaBase__ = 2056
	QsciScintillaBase__SCI_STYLESETEOLFILLED                         QsciScintillaBase__ = 2057
	QsciScintillaBase__SCI_STYLERESETDEFAULT                         QsciScintillaBase__ = 2058
	QsciScintillaBase__SCI_STYLESETUNDERLINE                         QsciScintillaBase__ = 2059
	QsciScintillaBase__SCI_STYLESETCASE                              QsciScintillaBase__ = 2060
	QsciScintillaBase__SCI_STYLESETSIZEFRACTIONAL                    QsciScintillaBase__ = 2061
	QsciScintillaBase__SCI_STYLEGETSIZEFRACTIONAL                    QsciScintillaBase__ = 2062
	QsciScintillaBase__SCI_STYLESETWEIGHT                            QsciScintillaBase__ = 2063
	QsciScintillaBase__SCI_STYLEGETWEIGHT                            QsciScintillaBase__ = 2064
	QsciScintillaBase__SCI_STYLESETCHARACTERSET                      QsciScintillaBase__ = 2066
	QsciScintillaBase__SCI_SETSELFORE                                QsciScintillaBase__ = 2067
	QsciScintillaBase__SCI_SETSELBACK                                QsciScintillaBase__ = 2068
	QsciScintillaBase__SCI_SETCARETFORE                              QsciScintillaBase__ = 2069
	QsciScintillaBase__SCI_ASSIGNCMDKEY                              QsciScintillaBase__ = 2070
	QsciScintillaBase__SCI_CLEARCMDKEY                               QsciScintillaBase__ = 2071
	QsciScintillaBase__SCI_CLEARALLCMDKEYS                           QsciScintillaBase__ = 2072
	QsciScintillaBase__SCI_SETSTYLINGEX                              QsciScintillaBase__ = 2073
	QsciScintillaBase__SCI_STYLESETVISIBLE                           QsciScintillaBase__ = 2074
	QsciScintillaBase__SCI_GETCARETPERIOD                            QsciScintillaBase__ = 2075
	QsciScintillaBase__SCI_SETCARETPERIOD                            QsciScintillaBase__ = 2076
	QsciScintillaBase__SCI_SETWORDCHARS                              QsciScintillaBase__ = 2077
	QsciScintillaBase__SCI_BEGINUNDOACTION                           QsciScintillaBase__ = 2078
	QsciScintillaBase__SCI_ENDUNDOACTION                             QsciScintillaBase__ = 2079
	QsciScintillaBase__SCI_INDICSETSTYLE                             QsciScintillaBase__ = 2080
	QsciScintillaBase__SCI_INDICGETSTYLE                             QsciScintillaBase__ = 2081
	QsciScintillaBase__SCI_INDICSETFORE                              QsciScintillaBase__ = 2082
	QsciScintillaBase__SCI_INDICGETFORE                              QsciScintillaBase__ = 2083
	QsciScintillaBase__SCI_SETWHITESPACEFORE                         QsciScintillaBase__ = 2084
	QsciScintillaBase__SCI_SETWHITESPACEBACK                         QsciScintillaBase__ = 2085
	QsciScintillaBase__SCI_SETWHITESPACESIZE                         QsciScintillaBase__ = 2086
	QsciScintillaBase__SCI_GETWHITESPACESIZE                         QsciScintillaBase__ = 2087
	QsciScintillaBase__SCI_SETSTYLEBITS                              QsciScintillaBase__ = 2090
	QsciScintillaBase__SCI_GETSTYLEBITS                              QsciScintillaBase__ = 2091
	QsciScintillaBase__SCI_SETLINESTATE                              QsciScintillaBase__ = 2092
	QsciScintillaBase__SCI_GETLINESTATE                              QsciScintillaBase__ = 2093
	QsciScintillaBase__SCI_GETMAXLINESTATE                           QsciScintillaBase__ = 2094
	QsciScintillaBase__SCI_GETCARETLINEVISIBLE                       QsciScintillaBase__ = 2095
	QsciScintillaBase__SCI_SETCARETLINEVISIBLE                       QsciScintillaBase__ = 2096
	QsciScintillaBase__SCI_GETCARETLINEBACK                          QsciScintillaBase__ = 2097
	QsciScintillaBase__SCI_SETCARETLINEBACK                          QsciScintillaBase__ = 2098
	QsciScintillaBase__SCI_STYLESETCHANGEABLE                        QsciScintillaBase__ = 2099
	QsciScintillaBase__SCI_AUTOCSHOW                                 QsciScintillaBase__ = 2100
	QsciScintillaBase__SCI_AUTOCCANCEL                               QsciScintillaBase__ = 2101
	QsciScintillaBase__SCI_AUTOCACTIVE                               QsciScintillaBase__ = 2102
	QsciScintillaBase__SCI_AUTOCPOSSTART                             QsciScintillaBase__ = 2103
	QsciScintillaBase__SCI_AUTOCCOMPLETE                             QsciScintillaBase__ = 2104
	QsciScintillaBase__SCI_AUTOCSTOPS                                QsciScintillaBase__ = 2105
	QsciScintillaBase__SCI_AUTOCSETSEPARATOR                         QsciScintillaBase__ = 2106
	QsciScintillaBase__SCI_AUTOCGETSEPARATOR                         QsciScintillaBase__ = 2107
	QsciScintillaBase__SCI_AUTOCSELECT                               QsciScintillaBase__ = 2108
	QsciScintillaBase__SCI_AUTOCSETCANCELATSTART                     QsciScintillaBase__ = 2110
	QsciScintillaBase__SCI_AUTOCGETCANCELATSTART                     QsciScintillaBase__ = 2111
	QsciScintillaBase__SCI_AUTOCSETFILLUPS                           QsciScintillaBase__ = 2112
	QsciScintillaBase__SCI_AUTOCSETCHOOSESINGLE                      QsciScintillaBase__ = 2113
	QsciScintillaBase__SCI_AUTOCGETCHOOSESINGLE                      QsciScintillaBase__ = 2114
	QsciScintillaBase__SCI_AUTOCSETIGNORECASE                        QsciScintillaBase__ = 2115
	QsciScintillaBase__SCI_AUTOCGETIGNORECASE                        QsciScintillaBase__ = 2116
	QsciScintillaBase__SCI_USERLISTSHOW                              QsciScintillaBase__ = 2117
	QsciScintillaBase__SCI_AUTOCSETAUTOHIDE                          QsciScintillaBase__ = 2118
	QsciScintillaBase__SCI_AUTOCGETAUTOHIDE                          QsciScintillaBase__ = 2119
	QsciScintillaBase__SCI_AUTOCSETDROPRESTOFWORD                    QsciScintillaBase__ = 2270
	QsciScintillaBase__SCI_AUTOCGETDROPRESTOFWORD                    QsciScintillaBase__ = 2271
	QsciScintillaBase__SCI_SETINDENT                                 QsciScintillaBase__ = 2122
	QsciScintillaBase__SCI_GETINDENT                                 QsciScintillaBase__ = 2123
	QsciScintillaBase__SCI_SETUSETABS                                QsciScintillaBase__ = 2124
	QsciScintillaBase__SCI_GETUSETABS                                QsciScintillaBase__ = 2125
	QsciScintillaBase__SCI_SETLINEINDENTATION                        QsciScintillaBase__ = 2126
	QsciScintillaBase__SCI_GETLINEINDENTATION                        QsciScintillaBase__ = 2127
	QsciScintillaBase__SCI_GETLINEINDENTPOSITION                     QsciScintillaBase__ = 2128
	QsciScintillaBase__SCI_GETCOLUMN                                 QsciScintillaBase__ = 2129
	QsciScintillaBase__SCI_SETHSCROLLBAR                             QsciScintillaBase__ = 2130
	QsciScintillaBase__SCI_GETHSCROLLBAR                             QsciScintillaBase__ = 2131
	QsciScintillaBase__SCI_SETINDENTATIONGUIDES                      QsciScintillaBase__ = 2132
	QsciScintillaBase__SCI_GETINDENTATIONGUIDES                      QsciScintillaBase__ = 2133
	QsciScintillaBase__SCI_SETHIGHLIGHTGUIDE                         QsciScintillaBase__ = 2134
	QsciScintillaBase__SCI_GETHIGHLIGHTGUIDE                         QsciScintillaBase__ = 2135
	QsciScintillaBase__SCI_GETLINEENDPOSITION                        QsciScintillaBase__ = 2136
	QsciScintillaBase__SCI_GETCODEPAGE                               QsciScintillaBase__ = 2137
	QsciScintillaBase__SCI_GETCARETFORE                              QsciScintillaBase__ = 2138
	QsciScintillaBase__SCI_GETREADONLY                               QsciScintillaBase__ = 2140
	QsciScintillaBase__SCI_SETCURRENTPOS                             QsciScintillaBase__ = 2141
	QsciScintillaBase__SCI_SETSELECTIONSTART                         QsciScintillaBase__ = 2142
	QsciScintillaBase__SCI_GETSELECTIONSTART                         QsciScintillaBase__ = 2143
	QsciScintillaBase__SCI_SETSELECTIONEND                           QsciScintillaBase__ = 2144
	QsciScintillaBase__SCI_GETSELECTIONEND                           QsciScintillaBase__ = 2145
	QsciScintillaBase__SCI_SETPRINTMAGNIFICATION                     QsciScintillaBase__ = 2146
	QsciScintillaBase__SCI_GETPRINTMAGNIFICATION                     QsciScintillaBase__ = 2147
	QsciScintillaBase__SCI_SETPRINTCOLOURMODE                        QsciScintillaBase__ = 2148
	QsciScintillaBase__SCI_GETPRINTCOLOURMODE                        QsciScintillaBase__ = 2149
	QsciScintillaBase__SCI_FINDTEXT                                  QsciScintillaBase__ = 2150
	QsciScintillaBase__SCI_FORMATRANGE                               QsciScintillaBase__ = 2151
	QsciScintillaBase__SCI_GETFIRSTVISIBLELINE                       QsciScintillaBase__ = 2152
	QsciScintillaBase__SCI_GETLINE                                   QsciScintillaBase__ = 2153
	QsciScintillaBase__SCI_GETLINECOUNT                              QsciScintillaBase__ = 2154
	QsciScintillaBase__SCI_SETMARGINLEFT                             QsciScintillaBase__ = 2155
	QsciScintillaBase__SCI_GETMARGINLEFT                             QsciScintillaBase__ = 2156
	QsciScintillaBase__SCI_SETMARGINRIGHT                            QsciScintillaBase__ = 2157
	QsciScintillaBase__SCI_GETMARGINRIGHT                            QsciScintillaBase__ = 2158
	QsciScintillaBase__SCI_GETMODIFY                                 QsciScintillaBase__ = 2159
	QsciScintillaBase__SCI_SETSEL                                    QsciScintillaBase__ = 2160
	QsciScintillaBase__SCI_GETSELTEXT                                QsciScintillaBase__ = 2161
	QsciScintillaBase__SCI_GETTEXTRANGE                              QsciScintillaBase__ = 2162
	QsciScintillaBase__SCI_HIDESELECTION                             QsciScintillaBase__ = 2163
	QsciScintillaBase__SCI_POINTXFROMPOSITION                        QsciScintillaBase__ = 2164
	QsciScintillaBase__SCI_POINTYFROMPOSITION                        QsciScintillaBase__ = 2165
	QsciScintillaBase__SCI_LINEFROMPOSITION                          QsciScintillaBase__ = 2166
	QsciScintillaBase__SCI_POSITIONFROMLINE                          QsciScintillaBase__ = 2167
	QsciScintillaBase__SCI_LINESCROLL                                QsciScintillaBase__ = 2168
	QsciScintillaBase__SCI_SCROLLCARET                               QsciScintillaBase__ = 2169
	QsciScintillaBase__SCI_REPLACESEL                                QsciScintillaBase__ = 2170
	QsciScintillaBase__SCI_SETREADONLY                               QsciScintillaBase__ = 2171
	QsciScintillaBase__SCI_NULL                                      QsciScintillaBase__ = 2172
	QsciScintillaBase__SCI_CANPASTE                                  QsciScintillaBase__ = 2173
	QsciScintillaBase__SCI_CANUNDO                                   QsciScintillaBase__ = 2174
	QsciScintillaBase__SCI_EMPTYUNDOBUFFER                           QsciScintillaBase__ = 2175
	QsciScintillaBase__SCI_UNDO                                      QsciScintillaBase__ = 2176
	QsciScintillaBase__SCI_CUT                                       QsciScintillaBase__ = 2177
	QsciScintillaBase__SCI_COPY                                      QsciScintillaBase__ = 2178
	QsciScintillaBase__SCI_PASTE                                     QsciScintillaBase__ = 2179
	QsciScintillaBase__SCI_CLEAR                                     QsciScintillaBase__ = 2180
	QsciScintillaBase__SCI_SETTEXT                                   QsciScintillaBase__ = 2181
	QsciScintillaBase__SCI_GETTEXT                                   QsciScintillaBase__ = 2182
	QsciScintillaBase__SCI_GETTEXTLENGTH                             QsciScintillaBase__ = 2183
	QsciScintillaBase__SCI_GETDIRECTFUNCTION                         QsciScintillaBase__ = 2184
	QsciScintillaBase__SCI_GETDIRECTPOINTER                          QsciScintillaBase__ = 2185
	QsciScintillaBase__SCI_SETOVERTYPE                               QsciScintillaBase__ = 2186
	QsciScintillaBase__SCI_GETOVERTYPE                               QsciScintillaBase__ = 2187
	QsciScintillaBase__SCI_SETCARETWIDTH                             QsciScintillaBase__ = 2188
	QsciScintillaBase__SCI_GETCARETWIDTH                             QsciScintillaBase__ = 2189
	QsciScintillaBase__SCI_SETTARGETSTART                            QsciScintillaBase__ = 2190
	QsciScintillaBase__SCI_GETTARGETSTART                            QsciScintillaBase__ = 2191
	QsciScintillaBase__SCI_SETTARGETEND                              QsciScintillaBase__ = 2192
	QsciScintillaBase__SCI_GETTARGETEND                              QsciScintillaBase__ = 2193
	QsciScintillaBase__SCI_REPLACETARGET                             QsciScintillaBase__ = 2194
	QsciScintillaBase__SCI_REPLACETARGETRE                           QsciScintillaBase__ = 2195
	QsciScintillaBase__SCI_SEARCHINTARGET                            QsciScintillaBase__ = 2197
	QsciScintillaBase__SCI_SETSEARCHFLAGS                            QsciScintillaBase__ = 2198
	QsciScintillaBase__SCI_GETSEARCHFLAGS                            QsciScintillaBase__ = 2199
	QsciScintillaBase__SCI_CALLTIPSHOW                               QsciScintillaBase__ = 2200
	QsciScintillaBase__SCI_CALLTIPCANCEL                             QsciScintillaBase__ = 2201
	QsciScintillaBase__SCI_CALLTIPACTIVE                             QsciScintillaBase__ = 2202
	QsciScintillaBase__SCI_CALLTIPPOSSTART                           QsciScintillaBase__ = 2203
	QsciScintillaBase__SCI_CALLTIPSETHLT                             QsciScintillaBase__ = 2204
	QsciScintillaBase__SCI_CALLTIPSETBACK                            QsciScintillaBase__ = 2205
	QsciScintillaBase__SCI_CALLTIPSETFORE                            QsciScintillaBase__ = 2206
	QsciScintillaBase__SCI_CALLTIPSETFOREHLT                         QsciScintillaBase__ = 2207
	QsciScintillaBase__SCI_AUTOCSETMAXWIDTH                          QsciScintillaBase__ = 2208
	QsciScintillaBase__SCI_AUTOCGETMAXWIDTH                          QsciScintillaBase__ = 2209
	QsciScintillaBase__SCI_AUTOCSETMAXHEIGHT                         QsciScintillaBase__ = 2210
	QsciScintillaBase__SCI_AUTOCGETMAXHEIGHT                         QsciScintillaBase__ = 2211
	QsciScintillaBase__SCI_CALLTIPUSESTYLE                           QsciScintillaBase__ = 2212
	QsciScintillaBase__SCI_CALLTIPSETPOSITION                        QsciScintillaBase__ = 2213
	QsciScintillaBase__SCI_CALLTIPSETPOSSTART                        QsciScintillaBase__ = 2214
	QsciScintillaBase__SCI_VISIBLEFROMDOCLINE                        QsciScintillaBase__ = 2220
	QsciScintillaBase__SCI_DOCLINEFROMVISIBLE                        QsciScintillaBase__ = 2221
	QsciScintillaBase__SCI_SETFOLDLEVEL                              QsciScintillaBase__ = 2222
	QsciScintillaBase__SCI_GETFOLDLEVEL                              QsciScintillaBase__ = 2223
	QsciScintillaBase__SCI_GETLASTCHILD                              QsciScintillaBase__ = 2224
	QsciScintillaBase__SCI_GETFOLDPARENT                             QsciScintillaBase__ = 2225
	QsciScintillaBase__SCI_SHOWLINES                                 QsciScintillaBase__ = 2226
	QsciScintillaBase__SCI_HIDELINES                                 QsciScintillaBase__ = 2227
	QsciScintillaBase__SCI_GETLINEVISIBLE                            QsciScintillaBase__ = 2228
	QsciScintillaBase__SCI_SETFOLDEXPANDED                           QsciScintillaBase__ = 2229
	QsciScintillaBase__SCI_GETFOLDEXPANDED                           QsciScintillaBase__ = 2230
	QsciScintillaBase__SCI_TOGGLEFOLD                                QsciScintillaBase__ = 2231
	QsciScintillaBase__SCI_ENSUREVISIBLE                             QsciScintillaBase__ = 2232
	QsciScintillaBase__SCI_SETFOLDFLAGS                              QsciScintillaBase__ = 2233
	QsciScintillaBase__SCI_ENSUREVISIBLEENFORCEPOLICY                QsciScintillaBase__ = 2234
	QsciScintillaBase__SCI_WRAPCOUNT                                 QsciScintillaBase__ = 2235
	QsciScintillaBase__SCI_GETALLLINESVISIBLE                        QsciScintillaBase__ = 2236
	QsciScintillaBase__SCI_FOLDLINE                                  QsciScintillaBase__ = 2237
	QsciScintillaBase__SCI_FOLDCHILDREN                              QsciScintillaBase__ = 2238
	QsciScintillaBase__SCI_EXPANDCHILDREN                            QsciScintillaBase__ = 2239
	QsciScintillaBase__SCI_SETMARGINBACKN                            QsciScintillaBase__ = 2250
	QsciScintillaBase__SCI_GETMARGINBACKN                            QsciScintillaBase__ = 2251
	QsciScintillaBase__SCI_SETMARGINS                                QsciScintillaBase__ = 2252
	QsciScintillaBase__SCI_GETMARGINS                                QsciScintillaBase__ = 2253
	QsciScintillaBase__SCI_SETTABINDENTS                             QsciScintillaBase__ = 2260
	QsciScintillaBase__SCI_GETTABINDENTS                             QsciScintillaBase__ = 2261
	QsciScintillaBase__SCI_SETBACKSPACEUNINDENTS                     QsciScintillaBase__ = 2262
	QsciScintillaBase__SCI_GETBACKSPACEUNINDENTS                     QsciScintillaBase__ = 2263
	QsciScintillaBase__SCI_SETMOUSEDWELLTIME                         QsciScintillaBase__ = 2264
	QsciScintillaBase__SCI_GETMOUSEDWELLTIME                         QsciScintillaBase__ = 2265
	QsciScintillaBase__SCI_WORDSTARTPOSITION                         QsciScintillaBase__ = 2266
	QsciScintillaBase__SCI_WORDENDPOSITION                           QsciScintillaBase__ = 2267
	QsciScintillaBase__SCI_SETWRAPMODE                               QsciScintillaBase__ = 2268
	QsciScintillaBase__SCI_GETWRAPMODE                               QsciScintillaBase__ = 2269
	QsciScintillaBase__SCI_SETLAYOUTCACHE                            QsciScintillaBase__ = 2272
	QsciScintillaBase__SCI_GETLAYOUTCACHE                            QsciScintillaBase__ = 2273
	QsciScintillaBase__SCI_SETSCROLLWIDTH                            QsciScintillaBase__ = 2274
	QsciScintillaBase__SCI_GETSCROLLWIDTH                            QsciScintillaBase__ = 2275
	QsciScintillaBase__SCI_TEXTWIDTH                                 QsciScintillaBase__ = 2276
	QsciScintillaBase__SCI_SETENDATLASTLINE                          QsciScintillaBase__ = 2277
	QsciScintillaBase__SCI_GETENDATLASTLINE                          QsciScintillaBase__ = 2278
	QsciScintillaBase__SCI_TEXTHEIGHT                                QsciScintillaBase__ = 2279
	QsciScintillaBase__SCI_SETVSCROLLBAR                             QsciScintillaBase__ = 2280
	QsciScintillaBase__SCI_GETVSCROLLBAR                             QsciScintillaBase__ = 2281
	QsciScintillaBase__SCI_APPENDTEXT                                QsciScintillaBase__ = 2282
	QsciScintillaBase__SCI_GETTWOPHASEDRAW                           QsciScintillaBase__ = 2283
	QsciScintillaBase__SCI_SETTWOPHASEDRAW                           QsciScintillaBase__ = 2284
	QsciScintillaBase__SCI_AUTOCGETTYPESEPARATOR                     QsciScintillaBase__ = 2285
	QsciScintillaBase__SCI_AUTOCSETTYPESEPARATOR                     QsciScintillaBase__ = 2286
	QsciScintillaBase__SCI_TARGETFROMSELECTION                       QsciScintillaBase__ = 2287
	QsciScintillaBase__SCI_LINESJOIN                                 QsciScintillaBase__ = 2288
	QsciScintillaBase__SCI_LINESSPLIT                                QsciScintillaBase__ = 2289
	QsciScintillaBase__SCI_SETFOLDMARGINCOLOUR                       QsciScintillaBase__ = 2290
	QsciScintillaBase__SCI_SETFOLDMARGINHICOLOUR                     QsciScintillaBase__ = 2291
	QsciScintillaBase__SCI_MARKERSETBACKSELECTED                     QsciScintillaBase__ = 2292
	QsciScintillaBase__SCI_MARKERENABLEHIGHLIGHT                     QsciScintillaBase__ = 2293
	QsciScintillaBase__SCI_LINEDOWN                                  QsciScintillaBase__ = 2300
	QsciScintillaBase__SCI_LINEDOWNEXTEND                            QsciScintillaBase__ = 2301
	QsciScintillaBase__SCI_LINEUP                                    QsciScintillaBase__ = 2302
	QsciScintillaBase__SCI_LINEUPEXTEND                              QsciScintillaBase__ = 2303
	QsciScintillaBase__SCI_CHARLEFT                                  QsciScintillaBase__ = 2304
	QsciScintillaBase__SCI_CHARLEFTEXTEND                            QsciScintillaBase__ = 2305
	QsciScintillaBase__SCI_CHARRIGHT                                 QsciScintillaBase__ = 2306
	QsciScintillaBase__SCI_CHARRIGHTEXTEND                           QsciScintillaBase__ = 2307
	QsciScintillaBase__SCI_WORDLEFT                                  QsciScintillaBase__ = 2308
	QsciScintillaBase__SCI_WORDLEFTEXTEND                            QsciScintillaBase__ = 2309
	QsciScintillaBase__SCI_WORDRIGHT                                 QsciScintillaBase__ = 2310
	QsciScintillaBase__SCI_WORDRIGHTEXTEND                           QsciScintillaBase__ = 2311
	QsciScintillaBase__SCI_HOME                                      QsciScintillaBase__ = 2312
	QsciScintillaBase__SCI_HOMEEXTEND                                QsciScintillaBase__ = 2313
	QsciScintillaBase__SCI_LINEEND                                   QsciScintillaBase__ = 2314
	QsciScintillaBase__SCI_LINEENDEXTEND                             QsciScintillaBase__ = 2315
	QsciScintillaBase__SCI_DOCUMENTSTART                             QsciScintillaBase__ = 2316
	QsciScintillaBase__SCI_DOCUMENTSTARTEXTEND                       QsciScintillaBase__ = 2317
	QsciScintillaBase__SCI_DOCUMENTEND                               QsciScintillaBase__ = 2318
	QsciScintillaBase__SCI_DOCUMENTENDEXTEND                         QsciScintillaBase__ = 2319
	QsciScintillaBase__SCI_PAGEUP                                    QsciScintillaBase__ = 2320
	QsciScintillaBase__SCI_PAGEUPEXTEND                              QsciScintillaBase__ = 2321
	QsciScintillaBase__SCI_PAGEDOWN                                  QsciScintillaBase__ = 2322
	QsciScintillaBase__SCI_PAGEDOWNEXTEND                            QsciScintillaBase__ = 2323
	QsciScintillaBase__SCI_EDITTOGGLEOVERTYPE                        QsciScintillaBase__ = 2324
	QsciScintillaBase__SCI_CANCEL                                    QsciScintillaBase__ = 2325
	QsciScintillaBase__SCI_DELETEBACK                                QsciScintillaBase__ = 2326
	QsciScintillaBase__SCI_TAB                                       QsciScintillaBase__ = 2327
	QsciScintillaBase__SCI_BACKTAB                                   QsciScintillaBase__ = 2328
	QsciScintillaBase__SCI_NEWLINE                                   QsciScintillaBase__ = 2329
	QsciScintillaBase__SCI_FORMFEED                                  QsciScintillaBase__ = 2330
	QsciScintillaBase__SCI_VCHOME                                    QsciScintillaBase__ = 2331
	QsciScintillaBase__SCI_VCHOMEEXTEND                              QsciScintillaBase__ = 2332
	QsciScintillaBase__SCI_ZOOMIN                                    QsciScintillaBase__ = 2333
	QsciScintillaBase__SCI_ZOOMOUT                                   QsciScintillaBase__ = 2334
	QsciScintillaBase__SCI_DELWORDLEFT                               QsciScintillaBase__ = 2335
	QsciScintillaBase__SCI_DELWORDRIGHT                              QsciScintillaBase__ = 2336
	QsciScintillaBase__SCI_LINECUT                                   QsciScintillaBase__ = 2337
	QsciScintillaBase__SCI_LINEDELETE                                QsciScintillaBase__ = 2338
	QsciScintillaBase__SCI_LINETRANSPOSE                             QsciScintillaBase__ = 2339
	QsciScintillaBase__SCI_LOWERCASE                                 QsciScintillaBase__ = 2340
	QsciScintillaBase__SCI_UPPERCASE                                 QsciScintillaBase__ = 2341
	QsciScintillaBase__SCI_LINESCROLLDOWN                            QsciScintillaBase__ = 2342
	QsciScintillaBase__SCI_LINESCROLLUP                              QsciScintillaBase__ = 2343
	QsciScintillaBase__SCI_DELETEBACKNOTLINE                         QsciScintillaBase__ = 2344
	QsciScintillaBase__SCI_HOMEDISPLAY                               QsciScintillaBase__ = 2345
	QsciScintillaBase__SCI_HOMEDISPLAYEXTEND                         QsciScintillaBase__ = 2346
	QsciScintillaBase__SCI_LINEENDDISPLAY                            QsciScintillaBase__ = 2347
	QsciScintillaBase__SCI_LINEENDDISPLAYEXTEND                      QsciScintillaBase__ = 2348
	QsciScintillaBase__SCI_MOVECARETINSIDEVIEW                       QsciScintillaBase__ = 2401
	QsciScintillaBase__SCI_LINELENGTH                                QsciScintillaBase__ = 2350
	QsciScintillaBase__SCI_BRACEHIGHLIGHT                            QsciScintillaBase__ = 2351
	QsciScintillaBase__SCI_BRACEBADLIGHT                             QsciScintillaBase__ = 2352
	QsciScintillaBase__SCI_BRACEMATCH                                QsciScintillaBase__ = 2353
	QsciScintillaBase__SCI_LINEREVERSE                               QsciScintillaBase__ = 2354
	QsciScintillaBase__SCI_GETVIEWEOL                                QsciScintillaBase__ = 2355
	QsciScintillaBase__SCI_SETVIEWEOL                                QsciScintillaBase__ = 2356
	QsciScintillaBase__SCI_GETDOCPOINTER                             QsciScintillaBase__ = 2357
	QsciScintillaBase__SCI_SETDOCPOINTER                             QsciScintillaBase__ = 2358
	QsciScintillaBase__SCI_SETMODEVENTMASK                           QsciScintillaBase__ = 2359
	QsciScintillaBase__SCI_GETEDGECOLUMN                             QsciScintillaBase__ = 2360
	QsciScintillaBase__SCI_SETEDGECOLUMN                             QsciScintillaBase__ = 2361
	QsciScintillaBase__SCI_GETEDGEMODE                               QsciScintillaBase__ = 2362
	QsciScintillaBase__SCI_SETEDGEMODE                               QsciScintillaBase__ = 2363
	QsciScintillaBase__SCI_GETEDGECOLOUR                             QsciScintillaBase__ = 2364
	QsciScintillaBase__SCI_SETEDGECOLOUR                             QsciScintillaBase__ = 2365
	QsciScintillaBase__SCI_SEARCHANCHOR                              QsciScintillaBase__ = 2366
	QsciScintillaBase__SCI_SEARCHNEXT                                QsciScintillaBase__ = 2367
	QsciScintillaBase__SCI_SEARCHPREV                                QsciScintillaBase__ = 2368
	QsciScintillaBase__SCI_LINESONSCREEN                             QsciScintillaBase__ = 2370
	QsciScintillaBase__SCI_USEPOPUP                                  QsciScintillaBase__ = 2371
	QsciScintillaBase__SCI_SELECTIONISRECTANGLE                      QsciScintillaBase__ = 2372
	QsciScintillaBase__SCI_SETZOOM                                   QsciScintillaBase__ = 2373
	QsciScintillaBase__SCI_GETZOOM                                   QsciScintillaBase__ = 2374
	QsciScintillaBase__SCI_CREATEDOCUMENT                            QsciScintillaBase__ = 2375
	QsciScintillaBase__SCI_ADDREFDOCUMENT                            QsciScintillaBase__ = 2376
	QsciScintillaBase__SCI_RELEASEDOCUMENT                           QsciScintillaBase__ = 2377
	QsciScintillaBase__SCI_GETMODEVENTMASK                           QsciScintillaBase__ = 2378
	QsciScintillaBase__SCI_SETFOCUS                                  QsciScintillaBase__ = 2380
	QsciScintillaBase__SCI_GETFOCUS                                  QsciScintillaBase__ = 2381
	QsciScintillaBase__SCI_SETSTATUS                                 QsciScintillaBase__ = 2382
	QsciScintillaBase__SCI_GETSTATUS                                 QsciScintillaBase__ = 2383
	QsciScintillaBase__SCI_SETMOUSEDOWNCAPTURES                      QsciScintillaBase__ = 2384
	QsciScintillaBase__SCI_GETMOUSEDOWNCAPTURES                      QsciScintillaBase__ = 2385
	QsciScintillaBase__SCI_SETCURSOR                                 QsciScintillaBase__ = 2386
	QsciScintillaBase__SCI_GETCURSOR                                 QsciScintillaBase__ = 2387
	QsciScintillaBase__SCI_SETCONTROLCHARSYMBOL                      QsciScintillaBase__ = 2388
	QsciScintillaBase__SCI_GETCONTROLCHARSYMBOL                      QsciScintillaBase__ = 2389
	QsciScintillaBase__SCI_WORDPARTLEFT                              QsciScintillaBase__ = 2390
	QsciScintillaBase__SCI_WORDPARTLEFTEXTEND                        QsciScintillaBase__ = 2391
	QsciScintillaBase__SCI_WORDPARTRIGHT                             QsciScintillaBase__ = 2392
	QsciScintillaBase__SCI_WORDPARTRIGHTEXTEND                       QsciScintillaBase__ = 2393
	QsciScintillaBase__SCI_SETVISIBLEPOLICY                          QsciScintillaBase__ = 2394
	QsciScintillaBase__SCI_DELLINELEFT                               QsciScintillaBase__ = 2395
	QsciScintillaBase__SCI_DELLINERIGHT                              QsciScintillaBase__ = 2396
	QsciScintillaBase__SCI_SETXOFFSET                                QsciScintillaBase__ = 2397
	QsciScintillaBase__SCI_GETXOFFSET                                QsciScintillaBase__ = 2398
	QsciScintillaBase__SCI_CHOOSECARETX                              QsciScintillaBase__ = 2399
	QsciScintillaBase__SCI_GRABFOCUS                                 QsciScintillaBase__ = 2400
	QsciScintillaBase__SCI_SETXCARETPOLICY                           QsciScintillaBase__ = 2402
	QsciScintillaBase__SCI_SETYCARETPOLICY                           QsciScintillaBase__ = 2403
	QsciScintillaBase__SCI_LINEDUPLICATE                             QsciScintillaBase__ = 2404
	QsciScintillaBase__SCI_REGISTERIMAGE                             QsciScintillaBase__ = 2405
	QsciScintillaBase__SCI_SETPRINTWRAPMODE                          QsciScintillaBase__ = 2406
	QsciScintillaBase__SCI_GETPRINTWRAPMODE                          QsciScintillaBase__ = 2407
	QsciScintillaBase__SCI_CLEARREGISTEREDIMAGES                     QsciScintillaBase__ = 2408
	QsciScintillaBase__SCI_STYLESETHOTSPOT                           QsciScintillaBase__ = 2409
	QsciScintillaBase__SCI_SETHOTSPOTACTIVEFORE                      QsciScintillaBase__ = 2410
	QsciScintillaBase__SCI_SETHOTSPOTACTIVEBACK                      QsciScintillaBase__ = 2411
	QsciScintillaBase__SCI_SETHOTSPOTACTIVEUNDERLINE                 QsciScintillaBase__ = 2412
	QsciScintillaBase__SCI_PARADOWN                                  QsciScintillaBase__ = 2413
	QsciScintillaBase__SCI_PARADOWNEXTEND                            QsciScintillaBase__ = 2414
	QsciScintillaBase__SCI_PARAUP                                    QsciScintillaBase__ = 2415
	QsciScintillaBase__SCI_PARAUPEXTEND                              QsciScintillaBase__ = 2416
	QsciScintillaBase__SCI_POSITIONBEFORE                            QsciScintillaBase__ = 2417
	QsciScintillaBase__SCI_POSITIONAFTER                             QsciScintillaBase__ = 2418
	QsciScintillaBase__SCI_COPYRANGE                                 QsciScintillaBase__ = 2419
	QsciScintillaBase__SCI_COPYTEXT                                  QsciScintillaBase__ = 2420
	QsciScintillaBase__SCI_SETHOTSPOTSINGLELINE                      QsciScintillaBase__ = 2421
	QsciScintillaBase__SCI_SETSELECTIONMODE                          QsciScintillaBase__ = 2422
	QsciScintillaBase__SCI_GETSELECTIONMODE                          QsciScintillaBase__ = 2423
	QsciScintillaBase__SCI_GETLINESELSTARTPOSITION                   QsciScintillaBase__ = 2424
	QsciScintillaBase__SCI_GETLINESELENDPOSITION                     QsciScintillaBase__ = 2425
	QsciScintillaBase__SCI_LINEDOWNRECTEXTEND                        QsciScintillaBase__ = 2426
	QsciScintillaBase__SCI_LINEUPRECTEXTEND                          QsciScintillaBase__ = 2427
	QsciScintillaBase__SCI_CHARLEFTRECTEXTEND                        QsciScintillaBase__ = 2428
	QsciScintillaBase__SCI_CHARRIGHTRECTEXTEND                       QsciScintillaBase__ = 2429
	QsciScintillaBase__SCI_HOMERECTEXTEND                            QsciScintillaBase__ = 2430
	QsciScintillaBase__SCI_VCHOMERECTEXTEND                          QsciScintillaBase__ = 2431
	QsciScintillaBase__SCI_LINEENDRECTEXTEND                         QsciScintillaBase__ = 2432
	QsciScintillaBase__SCI_PAGEUPRECTEXTEND                          QsciScintillaBase__ = 2433
	QsciScintillaBase__SCI_PAGEDOWNRECTEXTEND                        QsciScintillaBase__ = 2434
	QsciScintillaBase__SCI_STUTTEREDPAGEUP                           QsciScintillaBase__ = 2435
	QsciScintillaBase__SCI_STUTTEREDPAGEUPEXTEND                     QsciScintillaBase__ = 2436
	QsciScintillaBase__SCI_STUTTEREDPAGEDOWN                         QsciScintillaBase__ = 2437
	QsciScintillaBase__SCI_STUTTEREDPAGEDOWNEXTEND                   QsciScintillaBase__ = 2438
	QsciScintillaBase__SCI_WORDLEFTEND                               QsciScintillaBase__ = 2439
	QsciScintillaBase__SCI_WORDLEFTENDEXTEND                         QsciScintillaBase__ = 2440
	QsciScintillaBase__SCI_WORDRIGHTEND                              QsciScintillaBase__ = 2441
	QsciScintillaBase__SCI_WORDRIGHTENDEXTEND                        QsciScintillaBase__ = 2442
	QsciScintillaBase__SCI_SETWHITESPACECHARS                        QsciScintillaBase__ = 2443
	QsciScintillaBase__SCI_SETCHARSDEFAULT                           QsciScintillaBase__ = 2444
	QsciScintillaBase__SCI_AUTOCGETCURRENT                           QsciScintillaBase__ = 2445
	QsciScintillaBase__SCI_ALLOCATE                                  QsciScintillaBase__ = 2446
	QsciScintillaBase__SCI_HOMEWRAP                                  QsciScintillaBase__ = 2349
	QsciScintillaBase__SCI_HOMEWRAPEXTEND                            QsciScintillaBase__ = 2450
	QsciScintillaBase__SCI_LINEENDWRAP                               QsciScintillaBase__ = 2451
	QsciScintillaBase__SCI_LINEENDWRAPEXTEND                         QsciScintillaBase__ = 2452
	QsciScintillaBase__SCI_VCHOMEWRAP                                QsciScintillaBase__ = 2453
	QsciScintillaBase__SCI_VCHOMEWRAPEXTEND                          QsciScintillaBase__ = 2454
	QsciScintillaBase__SCI_LINECOPY                                  QsciScintillaBase__ = 2455
	QsciScintillaBase__SCI_FINDCOLUMN                                QsciScintillaBase__ = 2456
	QsciScintillaBase__SCI_GETCARETSTICKY                            QsciScintillaBase__ = 2457
	QsciScintillaBase__SCI_SETCARETSTICKY                            QsciScintillaBase__ = 2458
	QsciScintillaBase__SCI_TOGGLECARETSTICKY                         QsciScintillaBase__ = 2459
	QsciScintillaBase__SCI_SETWRAPVISUALFLAGS                        QsciScintillaBase__ = 2460
	QsciScintillaBase__SCI_GETWRAPVISUALFLAGS                        QsciScintillaBase__ = 2461
	QsciScintillaBase__SCI_SETWRAPVISUALFLAGSLOCATION                QsciScintillaBase__ = 2462
	QsciScintillaBase__SCI_GETWRAPVISUALFLAGSLOCATION                QsciScintillaBase__ = 2463
	QsciScintillaBase__SCI_SETWRAPSTARTINDENT                        QsciScintillaBase__ = 2464
	QsciScintillaBase__SCI_GETWRAPSTARTINDENT                        QsciScintillaBase__ = 2465
	QsciScintillaBase__SCI_MARKERADDSET                              QsciScintillaBase__ = 2466
	QsciScintillaBase__SCI_SETPASTECONVERTENDINGS                    QsciScintillaBase__ = 2467
	QsciScintillaBase__SCI_GETPASTECONVERTENDINGS                    QsciScintillaBase__ = 2468
	QsciScintillaBase__SCI_SELECTIONDUPLICATE                        QsciScintillaBase__ = 2469
	QsciScintillaBase__SCI_SETCARETLINEBACKALPHA                     QsciScintillaBase__ = 2470
	QsciScintillaBase__SCI_GETCARETLINEBACKALPHA                     QsciScintillaBase__ = 2471
	QsciScintillaBase__SCI_SETWRAPINDENTMODE                         QsciScintillaBase__ = 2472
	QsciScintillaBase__SCI_GETWRAPINDENTMODE                         QsciScintillaBase__ = 2473
	QsciScintillaBase__SCI_MARKERSETALPHA                            QsciScintillaBase__ = 2476
	QsciScintillaBase__SCI_GETSELALPHA                               QsciScintillaBase__ = 2477
	QsciScintillaBase__SCI_SETSELALPHA                               QsciScintillaBase__ = 2478
	QsciScintillaBase__SCI_GETSELEOLFILLED                           QsciScintillaBase__ = 2479
	QsciScintillaBase__SCI_SETSELEOLFILLED                           QsciScintillaBase__ = 2480
	QsciScintillaBase__SCI_STYLEGETFORE                              QsciScintillaBase__ = 2481
	QsciScintillaBase__SCI_STYLEGETBACK                              QsciScintillaBase__ = 2482
	QsciScintillaBase__SCI_STYLEGETBOLD                              QsciScintillaBase__ = 2483
	QsciScintillaBase__SCI_STYLEGETITALIC                            QsciScintillaBase__ = 2484
	QsciScintillaBase__SCI_STYLEGETSIZE                              QsciScintillaBase__ = 2485
	QsciScintillaBase__SCI_STYLEGETFONT                              QsciScintillaBase__ = 2486
	QsciScintillaBase__SCI_STYLEGETEOLFILLED                         QsciScintillaBase__ = 2487
	QsciScintillaBase__SCI_STYLEGETUNDERLINE                         QsciScintillaBase__ = 2488
	QsciScintillaBase__SCI_STYLEGETCASE                              QsciScintillaBase__ = 2489
	QsciScintillaBase__SCI_STYLEGETCHARACTERSET                      QsciScintillaBase__ = 2490
	QsciScintillaBase__SCI_STYLEGETVISIBLE                           QsciScintillaBase__ = 2491
	QsciScintillaBase__SCI_STYLEGETCHANGEABLE                        QsciScintillaBase__ = 2492
	QsciScintillaBase__SCI_STYLEGETHOTSPOT                           QsciScintillaBase__ = 2493
	QsciScintillaBase__SCI_GETHOTSPOTACTIVEFORE                      QsciScintillaBase__ = 2494
	QsciScintillaBase__SCI_GETHOTSPOTACTIVEBACK                      QsciScintillaBase__ = 2495
	QsciScintillaBase__SCI_GETHOTSPOTACTIVEUNDERLINE                 QsciScintillaBase__ = 2496
	QsciScintillaBase__SCI_GETHOTSPOTSINGLELINE                      QsciScintillaBase__ = 2497
	QsciScintillaBase__SCI_BRACEHIGHLIGHTINDICATOR                   QsciScintillaBase__ = 2498
	QsciScintillaBase__SCI_BRACEBADLIGHTINDICATOR                    QsciScintillaBase__ = 2499
	QsciScintillaBase__SCI_SETINDICATORCURRENT                       QsciScintillaBase__ = 2500
	QsciScintillaBase__SCI_GETINDICATORCURRENT                       QsciScintillaBase__ = 2501
	QsciScintillaBase__SCI_SETINDICATORVALUE                         QsciScintillaBase__ = 2502
	QsciScintillaBase__SCI_GETINDICATORVALUE                         QsciScintillaBase__ = 2503
	QsciScintillaBase__SCI_INDICATORFILLRANGE                        QsciScintillaBase__ = 2504
	QsciScintillaBase__SCI_INDICATORCLEARRANGE                       QsciScintillaBase__ = 2505
	QsciScintillaBase__SCI_INDICATORALLONFOR                         QsciScintillaBase__ = 2506
	QsciScintillaBase__SCI_INDICATORVALUEAT                          QsciScintillaBase__ = 2507
	QsciScintillaBase__SCI_INDICATORSTART                            QsciScintillaBase__ = 2508
	QsciScintillaBase__SCI_INDICATOREND                              QsciScintillaBase__ = 2509
	QsciScintillaBase__SCI_INDICSETUNDER                             QsciScintillaBase__ = 2510
	QsciScintillaBase__SCI_INDICGETUNDER                             QsciScintillaBase__ = 2511
	QsciScintillaBase__SCI_SETCARETSTYLE                             QsciScintillaBase__ = 2512
	QsciScintillaBase__SCI_GETCARETSTYLE                             QsciScintillaBase__ = 2513
	QsciScintillaBase__SCI_SETPOSITIONCACHE                          QsciScintillaBase__ = 2514
	QsciScintillaBase__SCI_GETPOSITIONCACHE                          QsciScintillaBase__ = 2515
	QsciScintillaBase__SCI_SETSCROLLWIDTHTRACKING                    QsciScintillaBase__ = 2516
	QsciScintillaBase__SCI_GETSCROLLWIDTHTRACKING                    QsciScintillaBase__ = 2517
	QsciScintillaBase__SCI_DELWORDRIGHTEND                           QsciScintillaBase__ = 2518
	QsciScintillaBase__SCI_COPYALLOWLINE                             QsciScintillaBase__ = 2519
	QsciScintillaBase__SCI_GETCHARACTERPOINTER                       QsciScintillaBase__ = 2520
	QsciScintillaBase__SCI_INDICSETALPHA                             QsciScintillaBase__ = 2523
	QsciScintillaBase__SCI_INDICGETALPHA                             QsciScintillaBase__ = 2524
	QsciScintillaBase__SCI_SETEXTRAASCENT                            QsciScintillaBase__ = 2525
	QsciScintillaBase__SCI_GETEXTRAASCENT                            QsciScintillaBase__ = 2526
	QsciScintillaBase__SCI_SETEXTRADESCENT                           QsciScintillaBase__ = 2527
	QsciScintillaBase__SCI_GETEXTRADESCENT                           QsciScintillaBase__ = 2528
	QsciScintillaBase__SCI_MARKERSYMBOLDEFINED                       QsciScintillaBase__ = 2529
	QsciScintillaBase__SCI_MARGINSETTEXT                             QsciScintillaBase__ = 2530
	QsciScintillaBase__SCI_MARGINGETTEXT                             QsciScintillaBase__ = 2531
	QsciScintillaBase__SCI_MARGINSETSTYLE                            QsciScintillaBase__ = 2532
	QsciScintillaBase__SCI_MARGINGETSTYLE                            QsciScintillaBase__ = 2533
	QsciScintillaBase__SCI_MARGINSETSTYLES                           QsciScintillaBase__ = 2534
	QsciScintillaBase__SCI_MARGINGETSTYLES                           QsciScintillaBase__ = 2535
	QsciScintillaBase__SCI_MARGINTEXTCLEARALL                        QsciScintillaBase__ = 2536
	QsciScintillaBase__SCI_MARGINSETSTYLEOFFSET                      QsciScintillaBase__ = 2537
	QsciScintillaBase__SCI_MARGINGETSTYLEOFFSET                      QsciScintillaBase__ = 2538
	QsciScintillaBase__SCI_SETMARGINOPTIONS                          QsciScintillaBase__ = 2539
	QsciScintillaBase__SCI_ANNOTATIONSETTEXT                         QsciScintillaBase__ = 2540
	QsciScintillaBase__SCI_ANNOTATIONGETTEXT                         QsciScintillaBase__ = 2541
	QsciScintillaBase__SCI_ANNOTATIONSETSTYLE                        QsciScintillaBase__ = 2542
	QsciScintillaBase__SCI_ANNOTATIONGETSTYLE                        QsciScintillaBase__ = 2543
	QsciScintillaBase__SCI_ANNOTATIONSETSTYLES                       QsciScintillaBase__ = 2544
	QsciScintillaBase__SCI_ANNOTATIONGETSTYLES                       QsciScintillaBase__ = 2545
	QsciScintillaBase__SCI_ANNOTATIONGETLINES                        QsciScintillaBase__ = 2546
	QsciScintillaBase__SCI_ANNOTATIONCLEARALL                        QsciScintillaBase__ = 2547
	QsciScintillaBase__SCI_ANNOTATIONSETVISIBLE                      QsciScintillaBase__ = 2548
	QsciScintillaBase__SCI_ANNOTATIONGETVISIBLE                      QsciScintillaBase__ = 2549
	QsciScintillaBase__SCI_ANNOTATIONSETSTYLEOFFSET                  QsciScintillaBase__ = 2550
	QsciScintillaBase__SCI_ANNOTATIONGETSTYLEOFFSET                  QsciScintillaBase__ = 2551
	QsciScintillaBase__SCI_RELEASEALLEXTENDEDSTYLES                  QsciScintillaBase__ = 2552
	QsciScintillaBase__SCI_ALLOCATEEXTENDEDSTYLES                    QsciScintillaBase__ = 2553
	QsciScintillaBase__SCI_SETEMPTYSELECTION                         QsciScintillaBase__ = 2556
	QsciScintillaBase__SCI_GETMARGINOPTIONS                          QsciScintillaBase__ = 2557
	QsciScintillaBase__SCI_INDICSETOUTLINEALPHA                      QsciScintillaBase__ = 2558
	QsciScintillaBase__SCI_INDICGETOUTLINEALPHA                      QsciScintillaBase__ = 2559
	QsciScintillaBase__SCI_ADDUNDOACTION                             QsciScintillaBase__ = 2560
	QsciScintillaBase__SCI_CHARPOSITIONFROMPOINT                     QsciScintillaBase__ = 2561
	QsciScintillaBase__SCI_CHARPOSITIONFROMPOINTCLOSE                QsciScintillaBase__ = 2562
	QsciScintillaBase__SCI_SETMULTIPLESELECTION                      QsciScintillaBase__ = 2563
	QsciScintillaBase__SCI_GETMULTIPLESELECTION                      QsciScintillaBase__ = 2564
	QsciScintillaBase__SCI_SETADDITIONALSELECTIONTYPING              QsciScintillaBase__ = 2565
	QsciScintillaBase__SCI_GETADDITIONALSELECTIONTYPING              QsciScintillaBase__ = 2566
	QsciScintillaBase__SCI_SETADDITIONALCARETSBLINK                  QsciScintillaBase__ = 2567
	QsciScintillaBase__SCI_GETADDITIONALCARETSBLINK                  QsciScintillaBase__ = 2568
	QsciScintillaBase__SCI_SCROLLRANGE                               QsciScintillaBase__ = 2569
	QsciScintillaBase__SCI_GETSELECTIONS                             QsciScintillaBase__ = 2570
	QsciScintillaBase__SCI_CLEARSELECTIONS                           QsciScintillaBase__ = 2571
	QsciScintillaBase__SCI_SETSELECTION                              QsciScintillaBase__ = 2572
	QsciScintillaBase__SCI_ADDSELECTION                              QsciScintillaBase__ = 2573
	QsciScintillaBase__SCI_SETMAINSELECTION                          QsciScintillaBase__ = 2574
	QsciScintillaBase__SCI_GETMAINSELECTION                          QsciScintillaBase__ = 2575
	QsciScintillaBase__SCI_SETSELECTIONNCARET                        QsciScintillaBase__ = 2576
	QsciScintillaBase__SCI_GETSELECTIONNCARET                        QsciScintillaBase__ = 2577
	QsciScintillaBase__SCI_SETSELECTIONNANCHOR                       QsciScintillaBase__ = 2578
	QsciScintillaBase__SCI_GETSELECTIONNANCHOR                       QsciScintillaBase__ = 2579
	QsciScintillaBase__SCI_SETSELECTIONNCARETVIRTUALSPACE            QsciScintillaBase__ = 2580
	QsciScintillaBase__SCI_GETSELECTIONNCARETVIRTUALSPACE            QsciScintillaBase__ = 2581
	QsciScintillaBase__SCI_SETSELECTIONNANCHORVIRTUALSPACE           QsciScintillaBase__ = 2582
	QsciScintillaBase__SCI_GETSELECTIONNANCHORVIRTUALSPACE           QsciScintillaBase__ = 2583
	QsciScintillaBase__SCI_SETSELECTIONNSTART                        QsciScintillaBase__ = 2584
	QsciScintillaBase__SCI_GETSELECTIONNSTART                        QsciScintillaBase__ = 2585
	QsciScintillaBase__SCI_SETSELECTIONNEND                          QsciScintillaBase__ = 2586
	QsciScintillaBase__SCI_GETSELECTIONNEND                          QsciScintillaBase__ = 2587
	QsciScintillaBase__SCI_SETRECTANGULARSELECTIONCARET              QsciScintillaBase__ = 2588
	QsciScintillaBase__SCI_GETRECTANGULARSELECTIONCARET              QsciScintillaBase__ = 2589
	QsciScintillaBase__SCI_SETRECTANGULARSELECTIONANCHOR             QsciScintillaBase__ = 2590
	QsciScintillaBase__SCI_GETRECTANGULARSELECTIONANCHOR             QsciScintillaBase__ = 2591
	QsciScintillaBase__SCI_SETRECTANGULARSELECTIONCARETVIRTUALSPACE  QsciScintillaBase__ = 2592
	QsciScintillaBase__SCI_GETRECTANGULARSELECTIONCARETVIRTUALSPACE  QsciScintillaBase__ = 2593
	QsciScintillaBase__SCI_SETRECTANGULARSELECTIONANCHORVIRTUALSPACE QsciScintillaBase__ = 2594
	QsciScintillaBase__SCI_GETRECTANGULARSELECTIONANCHORVIRTUALSPACE QsciScintillaBase__ = 2595
	QsciScintillaBase__SCI_SETVIRTUALSPACEOPTIONS                    QsciScintillaBase__ = 2596
	QsciScintillaBase__SCI_GETVIRTUALSPACEOPTIONS                    QsciScintillaBase__ = 2597
	QsciScintillaBase__SCI_SETRECTANGULARSELECTIONMODIFIER           QsciScintillaBase__ = 2598
	QsciScintillaBase__SCI_GETRECTANGULARSELECTIONMODIFIER           QsciScintillaBase__ = 2599
	QsciScintillaBase__SCI_SETADDITIONALSELFORE                      QsciScintillaBase__ = 2600
	QsciScintillaBase__SCI_SETADDITIONALSELBACK                      QsciScintillaBase__ = 2601
	QsciScintillaBase__SCI_SETADDITIONALSELALPHA                     QsciScintillaBase__ = 2602
	QsciScintillaBase__SCI_GETADDITIONALSELALPHA                     QsciScintillaBase__ = 2603
	QsciScintillaBase__SCI_SETADDITIONALCARETFORE                    QsciScintillaBase__ = 2604
	QsciScintillaBase__SCI_GETADDITIONALCARETFORE                    QsciScintillaBase__ = 2605
	QsciScintillaBase__SCI_ROTATESELECTION                           QsciScintillaBase__ = 2606
	QsciScintillaBase__SCI_SWAPMAINANCHORCARET                       QsciScintillaBase__ = 2607
	QsciScintillaBase__SCI_SETADDITIONALCARETSVISIBLE                QsciScintillaBase__ = 2608
	QsciScintillaBase__SCI_GETADDITIONALCARETSVISIBLE                QsciScintillaBase__ = 2609
	QsciScintillaBase__SCI_AUTOCGETCURRENTTEXT                       QsciScintillaBase__ = 2610
	QsciScintillaBase__SCI_SETFONTQUALITY                            QsciScintillaBase__ = 2611
	QsciScintillaBase__SCI_GETFONTQUALITY                            QsciScintillaBase__ = 2612
	QsciScintillaBase__SCI_SETFIRSTVISIBLELINE                       QsciScintillaBase__ = 2613
	QsciScintillaBase__SCI_SETMULTIPASTE                             QsciScintillaBase__ = 2614
	QsciScintillaBase__SCI_GETMULTIPASTE                             QsciScintillaBase__ = 2615
	QsciScintillaBase__SCI_GETTAG                                    QsciScintillaBase__ = 2616
	QsciScintillaBase__SCI_CHANGELEXERSTATE                          QsciScintillaBase__ = 2617
	QsciScintillaBase__SCI_CONTRACTEDFOLDNEXT                        QsciScintillaBase__ = 2618
	QsciScintillaBase__SCI_VERTICALCENTRECARET                       QsciScintillaBase__ = 2619
	QsciScintillaBase__SCI_MOVESELECTEDLINESUP                       QsciScintillaBase__ = 2620
	QsciScintillaBase__SCI_MOVESELECTEDLINESDOWN                     QsciScintillaBase__ = 2621
	QsciScintillaBase__SCI_SETIDENTIFIER                             QsciScintillaBase__ = 2622
	QsciScintillaBase__SCI_GETIDENTIFIER                             QsciScintillaBase__ = 2623
	QsciScintillaBase__SCI_RGBAIMAGESETWIDTH                         QsciScintillaBase__ = 2624
	QsciScintillaBase__SCI_RGBAIMAGESETHEIGHT                        QsciScintillaBase__ = 2625
	QsciScintillaBase__SCI_MARKERDEFINERGBAIMAGE                     QsciScintillaBase__ = 2626
	QsciScintillaBase__SCI_REGISTERRGBAIMAGE                         QsciScintillaBase__ = 2627
	QsciScintillaBase__SCI_SCROLLTOSTART                             QsciScintillaBase__ = 2628
	QsciScintillaBase__SCI_SCROLLTOEND                               QsciScintillaBase__ = 2629
	QsciScintillaBase__SCI_SETTECHNOLOGY                             QsciScintillaBase__ = 2630
	QsciScintillaBase__SCI_GETTECHNOLOGY                             QsciScintillaBase__ = 2631
	QsciScintillaBase__SCI_CREATELOADER                              QsciScintillaBase__ = 2632
	QsciScintillaBase__SCI_COUNTCHARACTERS                           QsciScintillaBase__ = 2633
	QsciScintillaBase__SCI_AUTOCSETCASEINSENSITIVEBEHAVIOUR          QsciScintillaBase__ = 2634
	QsciScintillaBase__SCI_AUTOCGETCASEINSENSITIVEBEHAVIOUR          QsciScintillaBase__ = 2635
	QsciScintillaBase__SCI_AUTOCSETMULTI                             QsciScintillaBase__ = 2636
	QsciScintillaBase__SCI_AUTOCGETMULTI                             QsciScintillaBase__ = 2637
	QsciScintillaBase__SCI_FINDINDICATORSHOW                         QsciScintillaBase__ = 2640
	QsciScintillaBase__SCI_FINDINDICATORFLASH                        QsciScintillaBase__ = 2641
	QsciScintillaBase__SCI_FINDINDICATORHIDE                         QsciScintillaBase__ = 2642
	QsciScintillaBase__SCI_GETRANGEPOINTER                           QsciScintillaBase__ = 2643
	QsciScintillaBase__SCI_GETGAPPOSITION                            QsciScintillaBase__ = 2644
	QsciScintillaBase__SCI_DELETERANGE                               QsciScintillaBase__ = 2645
	QsciScintillaBase__SCI_GETWORDCHARS                              QsciScintillaBase__ = 2646
	QsciScintillaBase__SCI_GETWHITESPACECHARS                        QsciScintillaBase__ = 2647
	QsciScintillaBase__SCI_SETPUNCTUATIONCHARS                       QsciScintillaBase__ = 2648
	QsciScintillaBase__SCI_GETPUNCTUATIONCHARS                       QsciScintillaBase__ = 2649
	QsciScintillaBase__SCI_GETSELECTIONEMPTY                         QsciScintillaBase__ = 2650
	QsciScintillaBase__SCI_RGBAIMAGESETSCALE                         QsciScintillaBase__ = 2651
	QsciScintillaBase__SCI_VCHOMEDISPLAY                             QsciScintillaBase__ = 2652
	QsciScintillaBase__SCI_VCHOMEDISPLAYEXTEND                       QsciScintillaBase__ = 2653
	QsciScintillaBase__SCI_GETCARETLINEVISIBLEALWAYS                 QsciScintillaBase__ = 2654
	QsciScintillaBase__SCI_SETCARETLINEVISIBLEALWAYS                 QsciScintillaBase__ = 2655
	QsciScintillaBase__SCI_SETLINEENDTYPESALLOWED                    QsciScintillaBase__ = 2656
	QsciScintillaBase__SCI_GETLINEENDTYPESALLOWED                    QsciScintillaBase__ = 2657
	QsciScintillaBase__SCI_GETLINEENDTYPESACTIVE                     QsciScintillaBase__ = 2658
	QsciScintillaBase__SCI_AUTOCSETORDER                             QsciScintillaBase__ = 2660
	QsciScintillaBase__SCI_AUTOCGETORDER                             QsciScintillaBase__ = 2661
	QsciScintillaBase__SCI_FOLDALL                                   QsciScintillaBase__ = 2662
	QsciScintillaBase__SCI_SETAUTOMATICFOLD                          QsciScintillaBase__ = 2663
	QsciScintillaBase__SCI_GETAUTOMATICFOLD                          QsciScintillaBase__ = 2664
	QsciScintillaBase__SCI_SETREPRESENTATION                         QsciScintillaBase__ = 2665
	QsciScintillaBase__SCI_GETREPRESENTATION                         QsciScintillaBase__ = 2666
	QsciScintillaBase__SCI_CLEARREPRESENTATION                       QsciScintillaBase__ = 2667
	QsciScintillaBase__SCI_SETMOUSESELECTIONRECTANGULARSWITCH        QsciScintillaBase__ = 2668
	QsciScintillaBase__SCI_GETMOUSESELECTIONRECTANGULARSWITCH        QsciScintillaBase__ = 2669
	QsciScintillaBase__SCI_POSITIONRELATIVE                          QsciScintillaBase__ = 2670
	QsciScintillaBase__SCI_DROPSELECTIONN                            QsciScintillaBase__ = 2671
	QsciScintillaBase__SCI_CHANGEINSERTION                           QsciScintillaBase__ = 2672
	QsciScintillaBase__SCI_GETPHASESDRAW                             QsciScintillaBase__ = 2673
	QsciScintillaBase__SCI_SETPHASESDRAW                             QsciScintillaBase__ = 2674
	QsciScintillaBase__SCI_CLEARTABSTOPS                             QsciScintillaBase__ = 2675
	QsciScintillaBase__SCI_ADDTABSTOP                                QsciScintillaBase__ = 2676
	QsciScintillaBase__SCI_GETNEXTTABSTOP                            QsciScintillaBase__ = 2677
	QsciScintillaBase__SCI_GETIMEINTERACTION                         QsciScintillaBase__ = 2678
	QsciScintillaBase__SCI_SETIMEINTERACTION                         QsciScintillaBase__ = 2679
	QsciScintillaBase__SCI_INDICSETHOVERSTYLE                        QsciScintillaBase__ = 2680
	QsciScintillaBase__SCI_INDICGETHOVERSTYLE                        QsciScintillaBase__ = 2681
	QsciScintillaBase__SCI_INDICSETHOVERFORE                         QsciScintillaBase__ = 2682
	QsciScintillaBase__SCI_INDICGETHOVERFORE                         QsciScintillaBase__ = 2683
	QsciScintillaBase__SCI_INDICSETFLAGS                             QsciScintillaBase__ = 2684
	QsciScintillaBase__SCI_INDICGETFLAGS                             QsciScintillaBase__ = 2685
	QsciScintillaBase__SCI_SETTARGETRANGE                            QsciScintillaBase__ = 2686
	QsciScintillaBase__SCI_GETTARGETTEXT                             QsciScintillaBase__ = 2687
	QsciScintillaBase__SCI_MULTIPLESELECTADDNEXT                     QsciScintillaBase__ = 2688
	QsciScintillaBase__SCI_MULTIPLESELECTADDEACH                     QsciScintillaBase__ = 2689
	QsciScintillaBase__SCI_TARGETWHOLEDOCUMENT                       QsciScintillaBase__ = 2690
	QsciScintillaBase__SCI_ISRANGEWORD                               QsciScintillaBase__ = 2691
	QsciScintillaBase__SCI_SETIDLESTYLING                            QsciScintillaBase__ = 2692
	QsciScintillaBase__SCI_GETIDLESTYLING                            QsciScintillaBase__ = 2693
	QsciScintillaBase__SCI_MULTIEDGEADDLINE                          QsciScintillaBase__ = 2694
	QsciScintillaBase__SCI_MULTIEDGECLEARALL                         QsciScintillaBase__ = 2695
	QsciScintillaBase__SCI_SETMOUSEWHEELCAPTURES                     QsciScintillaBase__ = 2696
	QsciScintillaBase__SCI_GETMOUSEWHEELCAPTURES                     QsciScintillaBase__ = 2697
	QsciScintillaBase__SCI_GETTABDRAWMODE                            QsciScintillaBase__ = 2698
	QsciScintillaBase__SCI_SETTABDRAWMODE                            QsciScintillaBase__ = 2699
	QsciScintillaBase__SCI_TOGGLEFOLDSHOWTEXT                        QsciScintillaBase__ = 2700
	QsciScintillaBase__SCI_FOLDDISPLAYTEXTSETSTYLE                   QsciScintillaBase__ = 2701
	QsciScintillaBase__SCI_SETACCESSIBILITY                          QsciScintillaBase__ = 2702
	QsciScintillaBase__SCI_GETACCESSIBILITY                          QsciScintillaBase__ = 2703
	QsciScintillaBase__SCI_GETCARETLINEFRAME                         QsciScintillaBase__ = 2704
	QsciScintillaBase__SCI_SETCARETLINEFRAME                         QsciScintillaBase__ = 2705
	QsciScintillaBase__SCI_STARTRECORD                               QsciScintillaBase__ = 3001
	QsciScintillaBase__SCI_STOPRECORD                                QsciScintillaBase__ = 3002
	QsciScintillaBase__SCI_SETLEXER                                  QsciScintillaBase__ = 4001
	QsciScintillaBase__SCI_GETLEXER                                  QsciScintillaBase__ = 4002
	QsciScintillaBase__SCI_COLOURISE                                 QsciScintillaBase__ = 4003
	QsciScintillaBase__SCI_SETPROPERTY                               QsciScintillaBase__ = 4004
	QsciScintillaBase__SCI_SETKEYWORDS                               QsciScintillaBase__ = 4005
	QsciScintillaBase__SCI_SETLEXERLANGUAGE                          QsciScintillaBase__ = 4006
	QsciScintillaBase__SCI_LOADLEXERLIBRARY                          QsciScintillaBase__ = 4007
	QsciScintillaBase__SCI_GETPROPERTY                               QsciScintillaBase__ = 4008
	QsciScintillaBase__SCI_GETPROPERTYEXPANDED                       QsciScintillaBase__ = 4009
	QsciScintillaBase__SCI_GETPROPERTYINT                            QsciScintillaBase__ = 4010
	QsciScintillaBase__SCI_GETSTYLEBITSNEEDED                        QsciScintillaBase__ = 4011
	QsciScintillaBase__SCI_GETLEXERLANGUAGE                          QsciScintillaBase__ = 4012
	QsciScintillaBase__SCI_PRIVATELEXERCALL                          QsciScintillaBase__ = 4013
	QsciScintillaBase__SCI_PROPERTYNAMES                             QsciScintillaBase__ = 4014
	QsciScintillaBase__SCI_PROPERTYTYPE                              QsciScintillaBase__ = 4015
	QsciScintillaBase__SCI_DESCRIBEPROPERTY                          QsciScintillaBase__ = 4016
	QsciScintillaBase__SCI_DESCRIBEKEYWORDSETS                       QsciScintillaBase__ = 4017
	QsciScintillaBase__SCI_GETLINEENDTYPESSUPPORTED                  QsciScintillaBase__ = 4018
	QsciScintillaBase__SCI_ALLOCATESUBSTYLES                         QsciScintillaBase__ = 4020
	QsciScintillaBase__SCI_GETSUBSTYLESSTART                         QsciScintillaBase__ = 4021
	QsciScintillaBase__SCI_GETSUBSTYLESLENGTH                        QsciScintillaBase__ = 4022
	QsciScintillaBase__SCI_GETSTYLEFROMSUBSTYLE                      QsciScintillaBase__ = 4027
	QsciScintillaBase__SCI_GETPRIMARYSTYLEFROMSTYLE                  QsciScintillaBase__ = 4028
	QsciScintillaBase__SCI_FREESUBSTYLES                             QsciScintillaBase__ = 4023
	QsciScintillaBase__SCI_SETIDENTIFIERS                            QsciScintillaBase__ = 4024
	QsciScintillaBase__SCI_DISTANCETOSECONDARYSTYLES                 QsciScintillaBase__ = 4025
	QsciScintillaBase__SCI_GETSUBSTYLEBASES                          QsciScintillaBase__ = 4026
	QsciScintillaBase__SCI_GETLINECHARACTERINDEX                     QsciScintillaBase__ = 2710
	QsciScintillaBase__SCI_ALLOCATELINECHARACTERINDEX                QsciScintillaBase__ = 2711
	QsciScintillaBase__SCI_RELEASELINECHARACTERINDEX                 QsciScintillaBase__ = 2712
	QsciScintillaBase__SCI_LINEFROMINDEXPOSITION                     QsciScintillaBase__ = 2713
	QsciScintillaBase__SCI_INDEXPOSITIONFROMLINE                     QsciScintillaBase__ = 2714
	QsciScintillaBase__SCI_COUNTCODEUNITS                            QsciScintillaBase__ = 2715
	QsciScintillaBase__SCI_POSITIONRELATIVECODEUNITS                 QsciScintillaBase__ = 2716
	QsciScintillaBase__SCI_GETNAMEDSTYLES                            QsciScintillaBase__ = 4029
	QsciScintillaBase__SCI_NAMEOFSTYLE                               QsciScintillaBase__ = 4030
	QsciScintillaBase__SCI_TAGSOFSTYLE                               QsciScintillaBase__ = 4031
	QsciScintillaBase__SCI_DESCRIPTIONOFSTYLE                        QsciScintillaBase__ = 4032
	QsciScintillaBase__SCI_GETMOVEEXTENDSSELECTION                   QsciScintillaBase__ = 2706
	QsciScintillaBase__SCI_SETCOMMANDEVENTS                          QsciScintillaBase__ = 2717
	QsciScintillaBase__SCI_GETCOMMANDEVENTS                          QsciScintillaBase__ = 2718
	QsciScintillaBase__SCI_GETDOCUMENTOPTIONS                        QsciScintillaBase__ = 2379
	QsciScintillaBase__SC_AC_FILLUP                                  QsciScintillaBase__ = 1
	QsciScintillaBase__SC_AC_DOUBLECLICK                             QsciScintillaBase__ = 2
	QsciScintillaBase__SC_AC_TAB                                     QsciScintillaBase__ = 3
	QsciScintillaBase__SC_AC_NEWLINE                                 QsciScintillaBase__ = 4
	QsciScintillaBase__SC_AC_COMMAND                                 QsciScintillaBase__ = 5
	QsciScintillaBase__SC_ALPHA_TRANSPARENT                          QsciScintillaBase__ = 0
	QsciScintillaBase__SC_ALPHA_OPAQUE                               QsciScintillaBase__ = 255
	QsciScintillaBase__SC_ALPHA_NOALPHA                              QsciScintillaBase__ = 256
	QsciScintillaBase__SC_CARETSTICKY_OFF                            QsciScintillaBase__ = 0
	QsciScintillaBase__SC_CARETSTICKY_ON                             QsciScintillaBase__ = 1
	QsciScintillaBase__SC_CARETSTICKY_WHITESPACE                     QsciScintillaBase__ = 2
	QsciScintillaBase__SC_DOCUMENTOPTION_DEFAULT                     QsciScintillaBase__ = 0
	QsciScintillaBase__SC_DOCUMENTOPTION_STYLES_NONE                 QsciScintillaBase__ = 1
	QsciScintillaBase__SC_DOCUMENTOPTION_TEXT_LARGE                  QsciScintillaBase__ = 256
	QsciScintillaBase__SC_EFF_QUALITY_MASK                           QsciScintillaBase__ = 15
	QsciScintillaBase__SC_EFF_QUALITY_DEFAULT                        QsciScintillaBase__ = 0
	QsciScintillaBase__SC_EFF_QUALITY_NON_ANTIALIASED                QsciScintillaBase__ = 1
	QsciScintillaBase__SC_EFF_QUALITY_ANTIALIASED                    QsciScintillaBase__ = 2
	QsciScintillaBase__SC_EFF_QUALITY_LCD_OPTIMIZED                  QsciScintillaBase__ = 3
	QsciScintillaBase__SC_IDLESTYLING_NONE                           QsciScintillaBase__ = 0
	QsciScintillaBase__SC_IDLESTYLING_TOVISIBLE                      QsciScintillaBase__ = 1
	QsciScintillaBase__SC_IDLESTYLING_AFTERVISIBLE                   QsciScintillaBase__ = 2
	QsciScintillaBase__SC_IDLESTYLING_ALL                            QsciScintillaBase__ = 3
	QsciScintillaBase__SC_IME_WINDOWED                               QsciScintillaBase__ = 0
	QsciScintillaBase__SC_IME_INLINE                                 QsciScintillaBase__ = 1
	QsciScintillaBase__SC_LINECHARACTERINDEX_NONE                    QsciScintillaBase__ = 0
	QsciScintillaBase__SC_LINECHARACTERINDEX_UTF32                   QsciScintillaBase__ = 1
	QsciScintillaBase__SC_LINECHARACTERINDEX_UTF16                   QsciScintillaBase__ = 2
	QsciScintillaBase__SC_MARGINOPTION_NONE                          QsciScintillaBase__ = 0
	QsciScintillaBase__SC_MARGINOPTION_SUBLINESELECT                 QsciScintillaBase__ = 1
	QsciScintillaBase__SC_MULTIAUTOC_ONCE                            QsciScintillaBase__ = 0
	QsciScintillaBase__SC_MULTIAUTOC_EACH                            QsciScintillaBase__ = 1
	QsciScintillaBase__SC_MULTIPASTE_ONCE                            QsciScintillaBase__ = 0
	QsciScintillaBase__SC_MULTIPASTE_EACH                            QsciScintillaBase__ = 1
	QsciScintillaBase__SC_POPUP_NEVER                                QsciScintillaBase__ = 0
	QsciScintillaBase__SC_POPUP_ALL                                  QsciScintillaBase__ = 1
	QsciScintillaBase__SC_POPUP_TEXT                                 QsciScintillaBase__ = 2
	QsciScintillaBase__SC_SEL_STREAM                                 QsciScintillaBase__ = 0
	QsciScintillaBase__SC_SEL_RECTANGLE                              QsciScintillaBase__ = 1
	QsciScintillaBase__SC_SEL_LINES                                  QsciScintillaBase__ = 2
	QsciScintillaBase__SC_SEL_THIN                                   QsciScintillaBase__ = 3
	QsciScintillaBase__SC_STATUS_OK                                  QsciScintillaBase__ = 0
	QsciScintillaBase__SC_STATUS_FAILURE                             QsciScintillaBase__ = 1
	QsciScintillaBase__SC_STATUS_BADALLOC                            QsciScintillaBase__ = 2
	QsciScintillaBase__SC_STATUS_WARN_START                          QsciScintillaBase__ = 1000
	QsciScintillaBase__SC_STATUS_WARNREGEX                           QsciScintillaBase__ = 1001
	QsciScintillaBase__SC_TYPE_BOOLEAN                               QsciScintillaBase__ = 0
	QsciScintillaBase__SC_TYPE_INTEGER                               QsciScintillaBase__ = 1
	QsciScintillaBase__SC_TYPE_STRING                                QsciScintillaBase__ = 2
	QsciScintillaBase__SC_UPDATE_CONTENT                             QsciScintillaBase__ = 1
	QsciScintillaBase__SC_UPDATE_SELECTION                           QsciScintillaBase__ = 2
	QsciScintillaBase__SC_UPDATE_V_SCROLL                            QsciScintillaBase__ = 4
	QsciScintillaBase__SC_UPDATE_H_SCROLL                            QsciScintillaBase__ = 8
	QsciScintillaBase__SC_WRAPVISUALFLAG_NONE                        QsciScintillaBase__ = 0
	QsciScintillaBase__SC_WRAPVISUALFLAG_END                         QsciScintillaBase__ = 1
	QsciScintillaBase__SC_WRAPVISUALFLAG_START                       QsciScintillaBase__ = 2
	QsciScintillaBase__SC_WRAPVISUALFLAG_MARGIN                      QsciScintillaBase__ = 4
	QsciScintillaBase__SC_WRAPVISUALFLAGLOC_DEFAULT                  QsciScintillaBase__ = 0
	QsciScintillaBase__SC_WRAPVISUALFLAGLOC_END_BY_TEXT              QsciScintillaBase__ = 1
	QsciScintillaBase__SC_WRAPVISUALFLAGLOC_START_BY_TEXT            QsciScintillaBase__ = 2
	QsciScintillaBase__SCTD_LONGARROW                                QsciScintillaBase__ = 0
	QsciScintillaBase__SCTD_STRIKEOUT                                QsciScintillaBase__ = 1
	QsciScintillaBase__SCVS_NONE                                     QsciScintillaBase__ = 0
	QsciScintillaBase__SCVS_RECTANGULARSELECTION                     QsciScintillaBase__ = 1
	QsciScintillaBase__SCVS_USERACCESSIBLE                           QsciScintillaBase__ = 2
	QsciScintillaBase__SCVS_NOWRAPLINESTART                          QsciScintillaBase__ = 4
	QsciScintillaBase__SCWS_INVISIBLE                                QsciScintillaBase__ = 0
	QsciScintillaBase__SCWS_VISIBLEALWAYS                            QsciScintillaBase__ = 1
	QsciScintillaBase__SCWS_VISIBLEAFTERINDENT                       QsciScintillaBase__ = 2
	QsciScintillaBase__SCWS_VISIBLEONLYININDENT                      QsciScintillaBase__ = 3
	QsciScintillaBase__SC_EOL_CRLF                                   QsciScintillaBase__ = 0
	QsciScintillaBase__SC_EOL_CR                                     QsciScintillaBase__ = 1
	QsciScintillaBase__SC_EOL_LF                                     QsciScintillaBase__ = 2
	QsciScintillaBase__SC_CP_DBCS                                    QsciScintillaBase__ = 1
	QsciScintillaBase__SC_CP_UTF8                                    QsciScintillaBase__ = 65001
	QsciScintillaBase__SC_MARK_CIRCLE                                QsciScintillaBase__ = 0
	QsciScintillaBase__SC_MARK_ROUNDRECT                             QsciScintillaBase__ = 1
	QsciScintillaBase__SC_MARK_ARROW                                 QsciScintillaBase__ = 2
	QsciScintillaBase__SC_MARK_SMALLRECT                             QsciScintillaBase__ = 3
	QsciScintillaBase__SC_MARK_SHORTARROW                            QsciScintillaBase__ = 4
	QsciScintillaBase__SC_MARK_EMPTY                                 QsciScintillaBase__ = 5
	QsciScintillaBase__SC_MARK_ARROWDOWN                             QsciScintillaBase__ = 6
	QsciScintillaBase__SC_MARK_MINUS                                 QsciScintillaBase__ = 7
	QsciScintillaBase__SC_MARK_PLUS                                  QsciScintillaBase__ = 8
	QsciScintillaBase__SC_MARK_VLINE                                 QsciScintillaBase__ = 9
	QsciScintillaBase__SC_MARK_LCORNER                               QsciScintillaBase__ = 10
	QsciScintillaBase__SC_MARK_TCORNER                               QsciScintillaBase__ = 11
	QsciScintillaBase__SC_MARK_BOXPLUS                               QsciScintillaBase__ = 12
	QsciScintillaBase__SC_MARK_BOXPLUSCONNECTED                      QsciScintillaBase__ = 13
	QsciScintillaBase__SC_MARK_BOXMINUS                              QsciScintillaBase__ = 14
	QsciScintillaBase__SC_MARK_BOXMINUSCONNECTED                     QsciScintillaBase__ = 15
	QsciScintillaBase__SC_MARK_LCORNERCURVE                          QsciScintillaBase__ = 16
	QsciScintillaBase__SC_MARK_TCORNERCURVE                          QsciScintillaBase__ = 17
	QsciScintillaBase__SC_MARK_CIRCLEPLUS                            QsciScintillaBase__ = 18
	QsciScintillaBase__SC_MARK_CIRCLEPLUSCONNECTED                   QsciScintillaBase__ = 19
	QsciScintillaBase__SC_MARK_CIRCLEMINUS                           QsciScintillaBase__ = 20
	QsciScintillaBase__SC_MARK_CIRCLEMINUSCONNECTED                  QsciScintillaBase__ = 21
	QsciScintillaBase__SC_MARK_BACKGROUND                            QsciScintillaBase__ = 22
	QsciScintillaBase__SC_MARK_DOTDOTDOT                             QsciScintillaBase__ = 23
	QsciScintillaBase__SC_MARK_ARROWS                                QsciScintillaBase__ = 24
	QsciScintillaBase__SC_MARK_PIXMAP                                QsciScintillaBase__ = 25
	QsciScintillaBase__SC_MARK_FULLRECT                              QsciScintillaBase__ = 26
	QsciScintillaBase__SC_MARK_LEFTRECT                              QsciScintillaBase__ = 27
	QsciScintillaBase__SC_MARK_AVAILABLE                             QsciScintillaBase__ = 28
	QsciScintillaBase__SC_MARK_UNDERLINE                             QsciScintillaBase__ = 29
	QsciScintillaBase__SC_MARK_RGBAIMAGE                             QsciScintillaBase__ = 30
	QsciScintillaBase__SC_MARK_BOOKMARK                              QsciScintillaBase__ = 31
	QsciScintillaBase__SC_MARK_CHARACTER                             QsciScintillaBase__ = 10000
	QsciScintillaBase__SC_MARKNUM_FOLDEREND                          QsciScintillaBase__ = 25
	QsciScintillaBase__SC_MARKNUM_FOLDEROPENMID                      QsciScintillaBase__ = 26
	QsciScintillaBase__SC_MARKNUM_FOLDERMIDTAIL                      QsciScintillaBase__ = 27
	QsciScintillaBase__SC_MARKNUM_FOLDERTAIL                         QsciScintillaBase__ = 28
	QsciScintillaBase__SC_MARKNUM_FOLDERSUB                          QsciScintillaBase__ = 29
	QsciScintillaBase__SC_MARKNUM_FOLDER                             QsciScintillaBase__ = 30
	QsciScintillaBase__SC_MARKNUM_FOLDEROPEN                         QsciScintillaBase__ = 31
	QsciScintillaBase__SC_MASK_FOLDERS                               QsciScintillaBase__ = 4261412864
	QsciScintillaBase__SC_MARGIN_SYMBOL                              QsciScintillaBase__ = 0
	QsciScintillaBase__SC_MARGIN_NUMBER                              QsciScintillaBase__ = 1
	QsciScintillaBase__SC_MARGIN_BACK                                QsciScintillaBase__ = 2
	QsciScintillaBase__SC_MARGIN_FORE                                QsciScintillaBase__ = 3
	QsciScintillaBase__SC_MARGIN_TEXT                                QsciScintillaBase__ = 4
	QsciScintillaBase__SC_MARGIN_RTEXT                               QsciScintillaBase__ = 5
	QsciScintillaBase__SC_MARGIN_COLOUR                              QsciScintillaBase__ = 6
	QsciScintillaBase__STYLE_DEFAULT                                 QsciScintillaBase__ = 32
	QsciScintillaBase__STYLE_LINENUMBER                              QsciScintillaBase__ = 33
	QsciScintillaBase__STYLE_BRACELIGHT                              QsciScintillaBase__ = 34
	QsciScintillaBase__STYLE_BRACEBAD                                QsciScintillaBase__ = 35
	QsciScintillaBase__STYLE_CONTROLCHAR                             QsciScintillaBase__ = 36
	QsciScintillaBase__STYLE_INDENTGUIDE                             QsciScintillaBase__ = 37
	QsciScintillaBase__STYLE_CALLTIP                                 QsciScintillaBase__ = 38
	QsciScintillaBase__STYLE_FOLDDISPLAYTEXT                         QsciScintillaBase__ = 39
	QsciScintillaBase__STYLE_LASTPREDEFINED                          QsciScintillaBase__ = 39
	QsciScintillaBase__STYLE_MAX                                     QsciScintillaBase__ = 255
	QsciScintillaBase__SC_CHARSET_ANSI                               QsciScintillaBase__ = 0
	QsciScintillaBase__SC_CHARSET_DEFAULT                            QsciScintillaBase__ = 1
	QsciScintillaBase__SC_CHARSET_BALTIC                             QsciScintillaBase__ = 186
	QsciScintillaBase__SC_CHARSET_CHINESEBIG5                        QsciScintillaBase__ = 136
	QsciScintillaBase__SC_CHARSET_EASTEUROPE                         QsciScintillaBase__ = 238
	QsciScintillaBase__SC_CHARSET_GB2312                             QsciScintillaBase__ = 134
	QsciScintillaBase__SC_CHARSET_GREEK                              QsciScintillaBase__ = 161
	QsciScintillaBase__SC_CHARSET_HANGUL                             QsciScintillaBase__ = 129
	QsciScintillaBase__SC_CHARSET_MAC                                QsciScintillaBase__ = 77
	QsciScintillaBase__SC_CHARSET_OEM                                QsciScintillaBase__ = 255
	QsciScintillaBase__SC_CHARSET_RUSSIAN                            QsciScintillaBase__ = 204
	QsciScintillaBase__SC_CHARSET_OEM866                             QsciScintillaBase__ = 866
	QsciScintillaBase__SC_CHARSET_CYRILLIC                           QsciScintillaBase__ = 1251
	QsciScintillaBase__SC_CHARSET_SHIFTJIS                           QsciScintillaBase__ = 128
	QsciScintillaBase__SC_CHARSET_SYMBOL                             QsciScintillaBase__ = 2
	QsciScintillaBase__SC_CHARSET_TURKISH                            QsciScintillaBase__ = 162
	QsciScintillaBase__SC_CHARSET_JOHAB                              QsciScintillaBase__ = 130
	QsciScintillaBase__SC_CHARSET_HEBREW                             QsciScintillaBase__ = 177
	QsciScintillaBase__SC_CHARSET_ARABIC                             QsciScintillaBase__ = 178
	QsciScintillaBase__SC_CHARSET_VIETNAMESE                         QsciScintillaBase__ = 163
	QsciScintillaBase__SC_CHARSET_THAI                               QsciScintillaBase__ = 222
	QsciScintillaBase__SC_CHARSET_8859_15                            QsciScintillaBase__ = 1000
	QsciScintillaBase__SC_CASE_MIXED                                 QsciScintillaBase__ = 0
	QsciScintillaBase__SC_CASE_UPPER                                 QsciScintillaBase__ = 1
	QsciScintillaBase__SC_CASE_LOWER                                 QsciScintillaBase__ = 2
	QsciScintillaBase__SC_CASE_CAMEL                                 QsciScintillaBase__ = 3
	QsciScintillaBase__SC_IV_NONE                                    QsciScintillaBase__ = 0
	QsciScintillaBase__SC_IV_REAL                                    QsciScintillaBase__ = 1
	QsciScintillaBase__SC_IV_LOOKFORWARD                             QsciScintillaBase__ = 2
	QsciScintillaBase__SC_IV_LOOKBOTH                                QsciScintillaBase__ = 3
	QsciScintillaBase__INDIC_PLAIN                                   QsciScintillaBase__ = 0
	QsciScintillaBase__INDIC_SQUIGGLE                                QsciScintillaBase__ = 1
	QsciScintillaBase__INDIC_TT                                      QsciScintillaBase__ = 2
	QsciScintillaBase__INDIC_DIAGONAL                                QsciScintillaBase__ = 3
	QsciScintillaBase__INDIC_STRIKE                                  QsciScintillaBase__ = 4
	QsciScintillaBase__INDIC_HIDDEN                                  QsciScintillaBase__ = 5
	QsciScintillaBase__INDIC_BOX                                     QsciScintillaBase__ = 6
	QsciScintillaBase__INDIC_ROUNDBOX                                QsciScintillaBase__ = 7
	QsciScintillaBase__INDIC_STRAIGHTBOX                             QsciScintillaBase__ = 8
	QsciScintillaBase__INDIC_DASH                                    QsciScintillaBase__ = 9
	QsciScintillaBase__INDIC_DOTS                                    QsciScintillaBase__ = 10
	QsciScintillaBase__INDIC_SQUIGGLELOW                             QsciScintillaBase__ = 11
	QsciScintillaBase__INDIC_DOTBOX                                  QsciScintillaBase__ = 12
	QsciScintillaBase__INDIC_SQUIGGLEPIXMAP                          QsciScintillaBase__ = 13
	QsciScintillaBase__INDIC_COMPOSITIONTHICK                        QsciScintillaBase__ = 14
	QsciScintillaBase__INDIC_COMPOSITIONTHIN                         QsciScintillaBase__ = 15
	QsciScintillaBase__INDIC_FULLBOX                                 QsciScintillaBase__ = 16
	QsciScintillaBase__INDIC_TEXTFORE                                QsciScintillaBase__ = 17
	QsciScintillaBase__INDIC_POINT                                   QsciScintillaBase__ = 18
	QsciScintillaBase__INDIC_POINTCHARACTER                          QsciScintillaBase__ = 19
	QsciScintillaBase__INDIC_GRADIENT                                QsciScintillaBase__ = 20
	QsciScintillaBase__INDIC_GRADIENTCENTRE                          QsciScintillaBase__ = 21
	QsciScintillaBase__INDIC_IME                                     QsciScintillaBase__ = 32
	QsciScintillaBase__INDIC_IME_MAX                                 QsciScintillaBase__ = 35
	QsciScintillaBase__INDIC_CONTAINER                               QsciScintillaBase__ = 8
	QsciScintillaBase__INDIC_MAX                                     QsciScintillaBase__ = 35
	QsciScintillaBase__INDIC0_MASK                                   QsciScintillaBase__ = 32
	QsciScintillaBase__INDIC1_MASK                                   QsciScintillaBase__ = 64
	QsciScintillaBase__INDIC2_MASK                                   QsciScintillaBase__ = 128
	QsciScintillaBase__INDICS_MASK                                   QsciScintillaBase__ = 224
	QsciScintillaBase__SC_INDICVALUEBIT                              QsciScintillaBase__ = 16777216
	QsciScintillaBase__SC_INDICVALUEMASK                             QsciScintillaBase__ = 16777215
	QsciScintillaBase__SC_INDICFLAG_VALUEBEFORE                      QsciScintillaBase__ = 1
	QsciScintillaBase__SC_PRINT_NORMAL                               QsciScintillaBase__ = 0
	QsciScintillaBase__SC_PRINT_INVERTLIGHT                          QsciScintillaBase__ = 1
	QsciScintillaBase__SC_PRINT_BLACKONWHITE                         QsciScintillaBase__ = 2
	QsciScintillaBase__SC_PRINT_COLOURONWHITE                        QsciScintillaBase__ = 3
	QsciScintillaBase__SC_PRINT_COLOURONWHITEDEFAULTBG               QsciScintillaBase__ = 4
	QsciScintillaBase__SC_PRINT_SCREENCOLOURS                        QsciScintillaBase__ = 5
	QsciScintillaBase__SCFIND_WHOLEWORD                              QsciScintillaBase__ = 2
	QsciScintillaBase__SCFIND_MATCHCASE                              QsciScintillaBase__ = 4
	QsciScintillaBase__SCFIND_WORDSTART                              QsciScintillaBase__ = 1048576
	QsciScintillaBase__SCFIND_REGEXP                                 QsciScintillaBase__ = 2097152
	QsciScintillaBase__SCFIND_POSIX                                  QsciScintillaBase__ = 4194304
	QsciScintillaBase__SCFIND_CXX11REGEX                             QsciScintillaBase__ = 8388608
	QsciScintillaBase__SC_FOLDDISPLAYTEXT_HIDDEN                     QsciScintillaBase__ = 0
	QsciScintillaBase__SC_FOLDDISPLAYTEXT_STANDARD                   QsciScintillaBase__ = 1
	QsciScintillaBase__SC_FOLDDISPLAYTEXT_BOXED                      QsciScintillaBase__ = 2
	QsciScintillaBase__SC_FOLDLEVELBASE                              QsciScintillaBase__ = 1024
	QsciScintillaBase__SC_FOLDLEVELWHITEFLAG                         QsciScintillaBase__ = 4096
	QsciScintillaBase__SC_FOLDLEVELHEADERFLAG                        QsciScintillaBase__ = 8192
	QsciScintillaBase__SC_FOLDLEVELNUMBERMASK                        QsciScintillaBase__ = 4095
	QsciScintillaBase__SC_FOLDFLAG_LINEBEFORE_EXPANDED               QsciScintillaBase__ = 2
	QsciScintillaBase__SC_FOLDFLAG_LINEBEFORE_CONTRACTED             QsciScintillaBase__ = 4
	QsciScintillaBase__SC_FOLDFLAG_LINEAFTER_EXPANDED                QsciScintillaBase__ = 8
	QsciScintillaBase__SC_FOLDFLAG_LINEAFTER_CONTRACTED              QsciScintillaBase__ = 16
	QsciScintillaBase__SC_FOLDFLAG_LEVELNUMBERS                      QsciScintillaBase__ = 64
	QsciScintillaBase__SC_FOLDFLAG_LINESTATE                         QsciScintillaBase__ = 128
	QsciScintillaBase__SC_LINE_END_TYPE_DEFAULT                      QsciScintillaBase__ = 0
	QsciScintillaBase__SC_LINE_END_TYPE_UNICODE                      QsciScintillaBase__ = 1
	QsciScintillaBase__SC_TIME_FOREVER                               QsciScintillaBase__ = 10000000
	QsciScintillaBase__SC_WRAP_NONE                                  QsciScintillaBase__ = 0
	QsciScintillaBase__SC_WRAP_WORD                                  QsciScintillaBase__ = 1
	QsciScintillaBase__SC_WRAP_CHAR                                  QsciScintillaBase__ = 2
	QsciScintillaBase__SC_WRAP_WHITESPACE                            QsciScintillaBase__ = 3
	QsciScintillaBase__SC_WRAPINDENT_FIXED                           QsciScintillaBase__ = 0
	QsciScintillaBase__SC_WRAPINDENT_SAME                            QsciScintillaBase__ = 1
	QsciScintillaBase__SC_WRAPINDENT_INDENT                          QsciScintillaBase__ = 2
	QsciScintillaBase__SC_WRAPINDENT_DEEPINDENT                      QsciScintillaBase__ = 3
	QsciScintillaBase__SC_CACHE_NONE                                 QsciScintillaBase__ = 0
	QsciScintillaBase__SC_CACHE_CARET                                QsciScintillaBase__ = 1
	QsciScintillaBase__SC_CACHE_PAGE                                 QsciScintillaBase__ = 2
	QsciScintillaBase__SC_CACHE_DOCUMENT                             QsciScintillaBase__ = 3
	QsciScintillaBase__SC_PHASES_ONE                                 QsciScintillaBase__ = 0
	QsciScintillaBase__SC_PHASES_TWO                                 QsciScintillaBase__ = 1
	QsciScintillaBase__SC_PHASES_MULTIPLE                            QsciScintillaBase__ = 2
	QsciScintillaBase__ANNOTATION_HIDDEN                             QsciScintillaBase__ = 0
	QsciScintillaBase__ANNOTATION_STANDARD                           QsciScintillaBase__ = 1
	QsciScintillaBase__ANNOTATION_BOXED                              QsciScintillaBase__ = 2
	QsciScintillaBase__ANNOTATION_INDENTED                           QsciScintillaBase__ = 3
	QsciScintillaBase__EDGE_NONE                                     QsciScintillaBase__ = 0
	QsciScintillaBase__EDGE_LINE                                     QsciScintillaBase__ = 1
	QsciScintillaBase__EDGE_BACKGROUND                               QsciScintillaBase__ = 2
	QsciScintillaBase__EDGE_MULTILINE                                QsciScintillaBase__ = 3
	QsciScintillaBase__SC_CURSORNORMAL                               QsciScintillaBase__ = -1
	QsciScintillaBase__SC_CURSORARROW                                QsciScintillaBase__ = 2
	QsciScintillaBase__SC_CURSORWAIT                                 QsciScintillaBase__ = 4
	QsciScintillaBase__SC_CURSORREVERSEARROW                         QsciScintillaBase__ = 7
	QsciScintillaBase__UNDO_MAY_COALESCE                             QsciScintillaBase__ = 1
	QsciScintillaBase__VISIBLE_SLOP                                  QsciScintillaBase__ = 1
	QsciScintillaBase__VISIBLE_STRICT                                QsciScintillaBase__ = 4
	QsciScintillaBase__CARET_SLOP                                    QsciScintillaBase__ = 1
	QsciScintillaBase__CARET_STRICT                                  QsciScintillaBase__ = 4
	QsciScintillaBase__CARET_JUMPS                                   QsciScintillaBase__ = 16
	QsciScintillaBase__CARET_EVEN                                    QsciScintillaBase__ = 8
	QsciScintillaBase__CARETSTYLE_INVISIBLE                          QsciScintillaBase__ = 0
	QsciScintillaBase__CARETSTYLE_LINE                               QsciScintillaBase__ = 1
	QsciScintillaBase__CARETSTYLE_BLOCK                              QsciScintillaBase__ = 2
	QsciScintillaBase__SC_MOD_INSERTTEXT                             QsciScintillaBase__ = 1
	QsciScintillaBase__SC_MOD_DELETETEXT                             QsciScintillaBase__ = 2
	QsciScintillaBase__SC_MOD_CHANGESTYLE                            QsciScintillaBase__ = 4
	QsciScintillaBase__SC_MOD_CHANGEFOLD                             QsciScintillaBase__ = 8
	QsciScintillaBase__SC_PERFORMED_USER                             QsciScintillaBase__ = 16
	QsciScintillaBase__SC_PERFORMED_UNDO                             QsciScintillaBase__ = 32
	QsciScintillaBase__SC_PERFORMED_REDO                             QsciScintillaBase__ = 64
	QsciScintillaBase__SC_MULTISTEPUNDOREDO                          QsciScintillaBase__ = 128
	QsciScintillaBase__SC_LASTSTEPINUNDOREDO                         QsciScintillaBase__ = 256
	QsciScintillaBase__SC_MOD_CHANGEMARKER                           QsciScintillaBase__ = 512
	QsciScintillaBase__SC_MOD_BEFOREINSERT                           QsciScintillaBase__ = 1024
	QsciScintillaBase__SC_MOD_BEFOREDELETE                           QsciScintillaBase__ = 2048
	QsciScintillaBase__SC_MULTILINEUNDOREDO                          QsciScintillaBase__ = 4096
	QsciScintillaBase__SC_STARTACTION                                QsciScintillaBase__ = 8192
	QsciScintillaBase__SC_MOD_CHANGEINDICATOR                        QsciScintillaBase__ = 16384
	QsciScintillaBase__SC_MOD_CHANGELINESTATE                        QsciScintillaBase__ = 32768
	QsciScintillaBase__SC_MOD_CHANGEMARGIN                           QsciScintillaBase__ = 65536
	QsciScintillaBase__SC_MOD_CHANGEANNOTATION                       QsciScintillaBase__ = 131072
	QsciScintillaBase__SC_MOD_CONTAINER                              QsciScintillaBase__ = 262144
	QsciScintillaBase__SC_MOD_LEXERSTATE                             QsciScintillaBase__ = 524288
	QsciScintillaBase__SC_MOD_INSERTCHECK                            QsciScintillaBase__ = 1048576
	QsciScintillaBase__SC_MOD_CHANGETABSTOPS                         QsciScintillaBase__ = 2097152
	QsciScintillaBase__SC_MODEVENTMASKALL                            QsciScintillaBase__ = 4194303
	QsciScintillaBase__SCK_DOWN                                      QsciScintillaBase__ = 300
	QsciScintillaBase__SCK_UP                                        QsciScintillaBase__ = 301
	QsciScintillaBase__SCK_LEFT                                      QsciScintillaBase__ = 302
	QsciScintillaBase__SCK_RIGHT                                     QsciScintillaBase__ = 303
	QsciScintillaBase__SCK_HOME                                      QsciScintillaBase__ = 304
	QsciScintillaBase__SCK_END                                       QsciScintillaBase__ = 305
	QsciScintillaBase__SCK_PRIOR                                     QsciScintillaBase__ = 306
	QsciScintillaBase__SCK_NEXT                                      QsciScintillaBase__ = 307
	QsciScintillaBase__SCK_DELETE                                    QsciScintillaBase__ = 308
	QsciScintillaBase__SCK_INSERT                                    QsciScintillaBase__ = 309
	QsciScintillaBase__SCK_ESCAPE                                    QsciScintillaBase__ = 7
	QsciScintillaBase__SCK_BACK                                      QsciScintillaBase__ = 8
	QsciScintillaBase__SCK_TAB                                       QsciScintillaBase__ = 9
	QsciScintillaBase__SCK_RETURN                                    QsciScintillaBase__ = 13
	QsciScintillaBase__SCK_ADD                                       QsciScintillaBase__ = 310
	QsciScintillaBase__SCK_SUBTRACT                                  QsciScintillaBase__ = 311
	QsciScintillaBase__SCK_DIVIDE                                    QsciScintillaBase__ = 312
	QsciScintillaBase__SCK_WIN                                       QsciScintillaBase__ = 313
	QsciScintillaBase__SCK_RWIN                                      QsciScintillaBase__ = 314
	QsciScintillaBase__SCK_MENU                                      QsciScintillaBase__ = 315
	QsciScintillaBase__SCMOD_NORM                                    QsciScintillaBase__ = 0
	QsciScintillaBase__SCMOD_SHIFT                                   QsciScintillaBase__ = 1
	QsciScintillaBase__SCMOD_CTRL                                    QsciScintillaBase__ = 2
	QsciScintillaBase__SCMOD_ALT                                     QsciScintillaBase__ = 4
	QsciScintillaBase__SCMOD_SUPER                                   QsciScintillaBase__ = 8
	QsciScintillaBase__SCMOD_META                                    QsciScintillaBase__ = 16
	QsciScintillaBase__SCLEX_CONTAINER                               QsciScintillaBase__ = 0
	QsciScintillaBase__SCLEX_NULL                                    QsciScintillaBase__ = 1
	QsciScintillaBase__SCLEX_PYTHON                                  QsciScintillaBase__ = 2
	QsciScintillaBase__SCLEX_CPP                                     QsciScintillaBase__ = 3
	QsciScintillaBase__SCLEX_HTML                                    QsciScintillaBase__ = 4
	QsciScintillaBase__SCLEX_XML                                     QsciScintillaBase__ = 5
	QsciScintillaBase__SCLEX_PERL                                    QsciScintillaBase__ = 6
	QsciScintillaBase__SCLEX_SQL                                     QsciScintillaBase__ = 7
	QsciScintillaBase__SCLEX_VB                                      QsciScintillaBase__ = 8
	QsciScintillaBase__SCLEX_PROPERTIES                              QsciScintillaBase__ = 9
	QsciScintillaBase__SCLEX_ERRORLIST                               QsciScintillaBase__ = 10
	QsciScintillaBase__SCLEX_MAKEFILE                                QsciScintillaBase__ = 11
	QsciScintillaBase__SCLEX_BATCH                                   QsciScintillaBase__ = 12
	QsciScintillaBase__SCLEX_LATEX                                   QsciScintillaBase__ = 14
	QsciScintillaBase__SCLEX_LUA                                     QsciScintillaBase__ = 15
	QsciScintillaBase__SCLEX_DIFF                                    QsciScintillaBase__ = 16
	QsciScintillaBase__SCLEX_CONF                                    QsciScintillaBase__ = 17
	QsciScintillaBase__SCLEX_PASCAL                                  QsciScintillaBase__ = 18
	QsciScintillaBase__SCLEX_AVE                                     QsciScintillaBase__ = 19
	QsciScintillaBase__SCLEX_ADA                                     QsciScintillaBase__ = 20
	QsciScintillaBase__SCLEX_LISP                                    QsciScintillaBase__ = 21
	QsciScintillaBase__SCLEX_RUBY                                    QsciScintillaBase__ = 22
	QsciScintillaBase__SCLEX_EIFFEL                                  QsciScintillaBase__ = 23
	QsciScintillaBase__SCLEX_EIFFELKW                                QsciScintillaBase__ = 24
	QsciScintillaBase__SCLEX_TCL                                     QsciScintillaBase__ = 25
	QsciScintillaBase__SCLEX_NNCRONTAB                               QsciScintillaBase__ = 26
	QsciScintillaBase__SCLEX_BULLANT                                 QsciScintillaBase__ = 27
	QsciScintillaBase__SCLEX_VBSCRIPT                                QsciScintillaBase__ = 28
	QsciScintillaBase__SCLEX_ASP                                     QsciScintillaBase__ = 4
	QsciScintillaBase__SCLEX_PHP                                     QsciScintillaBase__ = 4
	QsciScintillaBase__SCLEX_BAAN                                    QsciScintillaBase__ = 31
	QsciScintillaBase__SCLEX_MATLAB                                  QsciScintillaBase__ = 32
	QsciScintillaBase__SCLEX_SCRIPTOL                                QsciScintillaBase__ = 33
	QsciScintillaBase__SCLEX_ASM                                     QsciScintillaBase__ = 34
	QsciScintillaBase__SCLEX_CPPNOCASE                               QsciScintillaBase__ = 35
	QsciScintillaBase__SCLEX_FORTRAN                                 QsciScintillaBase__ = 36
	QsciScintillaBase__SCLEX_F77                                     QsciScintillaBase__ = 37
	QsciScintillaBase__SCLEX_CSS                                     QsciScintillaBase__ = 38
	QsciScintillaBase__SCLEX_POV                                     QsciScintillaBase__ = 39
	QsciScintillaBase__SCLEX_LOUT                                    QsciScintillaBase__ = 40
	QsciScintillaBase__SCLEX_ESCRIPT                                 QsciScintillaBase__ = 41
	QsciScintillaBase__SCLEX_PS                                      QsciScintillaBase__ = 42
	QsciScintillaBase__SCLEX_NSIS                                    QsciScintillaBase__ = 43
	QsciScintillaBase__SCLEX_MMIXAL                                  QsciScintillaBase__ = 44
	QsciScintillaBase__SCLEX_CLW                                     QsciScintillaBase__ = 45
	QsciScintillaBase__SCLEX_CLWNOCASE                               QsciScintillaBase__ = 46
	QsciScintillaBase__SCLEX_LOT                                     QsciScintillaBase__ = 47
	QsciScintillaBase__SCLEX_YAML                                    QsciScintillaBase__ = 48
	QsciScintillaBase__SCLEX_TEX                                     QsciScintillaBase__ = 49
	QsciScintillaBase__SCLEX_METAPOST                                QsciScintillaBase__ = 50
	QsciScintillaBase__SCLEX_POWERBASIC                              QsciScintillaBase__ = 51
	QsciScintillaBase__SCLEX_FORTH                                   QsciScintillaBase__ = 52
	QsciScintillaBase__SCLEX_ERLANG                                  QsciScintillaBase__ = 53
	QsciScintillaBase__SCLEX_OCTAVE                                  QsciScintillaBase__ = 54
	QsciScintillaBase__SCLEX_MSSQL                                   QsciScintillaBase__ = 55
	QsciScintillaBase__SCLEX_VERILOG                                 QsciScintillaBase__ = 56
	QsciScintillaBase__SCLEX_KIX                                     QsciScintillaBase__ = 57
	QsciScintillaBase__SCLEX_GUI4CLI                                 QsciScintillaBase__ = 58
	QsciScintillaBase__SCLEX_SPECMAN                                 QsciScintillaBase__ = 59
	QsciScintillaBase__SCLEX_AU3                                     QsciScintillaBase__ = 60
	QsciScintillaBase__SCLEX_APDL                                    QsciScintillaBase__ = 61
	QsciScintillaBase__SCLEX_BASH                                    QsciScintillaBase__ = 62
	QsciScintillaBase__SCLEX_ASN1                                    QsciScintillaBase__ = 63
	QsciScintillaBase__SCLEX_VHDL                                    QsciScintillaBase__ = 64
	QsciScintillaBase__SCLEX_CAML                                    QsciScintillaBase__ = 65
	QsciScintillaBase__SCLEX_BLITZBASIC                              QsciScintillaBase__ = 66
	QsciScintillaBase__SCLEX_PUREBASIC                               QsciScintillaBase__ = 67
	QsciScintillaBase__SCLEX_HASKELL                                 QsciScintillaBase__ = 68
	QsciScintillaBase__SCLEX_PHPSCRIPT                               QsciScintillaBase__ = 69
	QsciScintillaBase__SCLEX_TADS3                                   QsciScintillaBase__ = 70
	QsciScintillaBase__SCLEX_REBOL                                   QsciScintillaBase__ = 71
	QsciScintillaBase__SCLEX_SMALLTALK                               QsciScintillaBase__ = 72
	QsciScintillaBase__SCLEX_FLAGSHIP                                QsciScintillaBase__ = 73
	QsciScintillaBase__SCLEX_CSOUND                                  QsciScintillaBase__ = 74
	QsciScintillaBase__SCLEX_FREEBASIC                               QsciScintillaBase__ = 75
	QsciScintillaBase__SCLEX_INNOSETUP                               QsciScintillaBase__ = 76
	QsciScintillaBase__SCLEX_OPAL                                    QsciScintillaBase__ = 77
	QsciScintillaBase__SCLEX_SPICE                                   QsciScintillaBase__ = 78
	QsciScintillaBase__SCLEX_D                                       QsciScintillaBase__ = 79
	QsciScintillaBase__SCLEX_CMAKE                                   QsciScintillaBase__ = 80
	QsciScintillaBase__SCLEX_GAP                                     QsciScintillaBase__ = 81
	QsciScintillaBase__SCLEX_PLM                                     QsciScintillaBase__ = 82
	QsciScintillaBase__SCLEX_PROGRESS                                QsciScintillaBase__ = 83
	QsciScintillaBase__SCLEX_ABAQUS                                  QsciScintillaBase__ = 84
	QsciScintillaBase__SCLEX_ASYMPTOTE                               QsciScintillaBase__ = 85
	QsciScintillaBase__SCLEX_R                                       QsciScintillaBase__ = 86
	QsciScintillaBase__SCLEX_MAGIK                                   QsciScintillaBase__ = 87
	QsciScintillaBase__SCLEX_POWERSHELL                              QsciScintillaBase__ = 88
	QsciScintillaBase__SCLEX_MYSQL                                   QsciScintillaBase__ = 89
	QsciScintillaBase__SCLEX_PO                                      QsciScintillaBase__ = 90
	QsciScintillaBase__SCLEX_TAL                                     QsciScintillaBase__ = 91
	QsciScintillaBase__SCLEX_COBOL                                   QsciScintillaBase__ = 92
	QsciScintillaBase__SCLEX_TACL                                    QsciScintillaBase__ = 93
	QsciScintillaBase__SCLEX_SORCUS                                  QsciScintillaBase__ = 94
	QsciScintillaBase__SCLEX_POWERPRO                                QsciScintillaBase__ = 95
	QsciScintillaBase__SCLEX_NIMROD                                  QsciScintillaBase__ = 96
	QsciScintillaBase__SCLEX_SML                                     QsciScintillaBase__ = 97
	QsciScintillaBase__SCLEX_MARKDOWN                                QsciScintillaBase__ = 98
	QsciScintillaBase__SCLEX_TXT2TAGS                                QsciScintillaBase__ = 99
	QsciScintillaBase__SCLEX_A68K                                    QsciScintillaBase__ = 100
	QsciScintillaBase__SCLEX_MODULA                                  QsciScintillaBase__ = 101
	QsciScintillaBase__SCLEX_COFFEESCRIPT                            QsciScintillaBase__ = 102
	QsciScintillaBase__SCLEX_TCMD                                    QsciScintillaBase__ = 103
	QsciScintillaBase__SCLEX_AVS                                     QsciScintillaBase__ = 104
	QsciScintillaBase__SCLEX_ECL                                     QsciScintillaBase__ = 105
	QsciScintillaBase__SCLEX_OSCRIPT                                 QsciScintillaBase__ = 106
	QsciScintillaBase__SCLEX_VISUALPROLOG                            QsciScintillaBase__ = 107
	QsciScintillaBase__SCLEX_LITERATEHASKELL                         QsciScintillaBase__ = 108
	QsciScintillaBase__SCLEX_STTXT                                   QsciScintillaBase__ = 109
	QsciScintillaBase__SCLEX_KVIRC                                   QsciScintillaBase__ = 110
	QsciScintillaBase__SCLEX_RUST                                    QsciScintillaBase__ = 111
	QsciScintillaBase__SCLEX_DMAP                                    QsciScintillaBase__ = 112
	QsciScintillaBase__SCLEX_AS                                      QsciScintillaBase__ = 113
	QsciScintillaBase__SCLEX_DMIS                                    QsciScintillaBase__ = 114
	QsciScintillaBase__SCLEX_REGISTRY                                QsciScintillaBase__ = 115
	QsciScintillaBase__SCLEX_BIBTEX                                  QsciScintillaBase__ = 116
	QsciScintillaBase__SCLEX_SREC                                    QsciScintillaBase__ = 117
	QsciScintillaBase__SCLEX_IHEX                                    QsciScintillaBase__ = 118
	QsciScintillaBase__SCLEX_TEHEX                                   QsciScintillaBase__ = 119
	QsciScintillaBase__SCLEX_JSON                                    QsciScintillaBase__ = 120
	QsciScintillaBase__SCLEX_EDIFACT                                 QsciScintillaBase__ = 121
	QsciScintillaBase__SCLEX_INDENT                                  QsciScintillaBase__ = 122
	QsciScintillaBase__SCLEX_MAXIMA                                  QsciScintillaBase__ = 123
	QsciScintillaBase__SCLEX_STATA                                   QsciScintillaBase__ = 124
	QsciScintillaBase__SCLEX_SAS                                     QsciScintillaBase__ = 125
	QsciScintillaBase__SC_WEIGHT_NORMAL                              QsciScintillaBase__ = 400
	QsciScintillaBase__SC_WEIGHT_SEMIBOLD                            QsciScintillaBase__ = 600
	QsciScintillaBase__SC_WEIGHT_BOLD                                QsciScintillaBase__ = 700
	QsciScintillaBase__SC_TECHNOLOGY_DEFAULT                         QsciScintillaBase__ = 0
	QsciScintillaBase__SC_TECHNOLOGY_DIRECTWRITE                     QsciScintillaBase__ = 1
	QsciScintillaBase__SC_TECHNOLOGY_DIRECTWRITERETAIN               QsciScintillaBase__ = 2
	QsciScintillaBase__SC_TECHNOLOGY_DIRECTWRITEDC                   QsciScintillaBase__ = 3
	QsciScintillaBase__SC_CASEINSENSITIVEBEHAVIOUR_RESPECTCASE       QsciScintillaBase__ = 0
	QsciScintillaBase__SC_CASEINSENSITIVEBEHAVIOUR_IGNORECASE        QsciScintillaBase__ = 1
	QsciScintillaBase__SC_FONT_SIZE_MULTIPLIER                       QsciScintillaBase__ = 100
	QsciScintillaBase__SC_FOLDACTION_CONTRACT                        QsciScintillaBase__ = 0
	QsciScintillaBase__SC_FOLDACTION_EXPAND                          QsciScintillaBase__ = 1
	QsciScintillaBase__SC_FOLDACTION_TOGGLE                          QsciScintillaBase__ = 2
	QsciScintillaBase__SC_AUTOMATICFOLD_SHOW                         QsciScintillaBase__ = 1
	QsciScintillaBase__SC_AUTOMATICFOLD_CLICK                        QsciScintillaBase__ = 2
	QsciScintillaBase__SC_AUTOMATICFOLD_CHANGE                       QsciScintillaBase__ = 4
	QsciScintillaBase__SC_ORDER_PRESORTED                            QsciScintillaBase__ = 0
	QsciScintillaBase__SC_ORDER_PERFORMSORT                          QsciScintillaBase__ = 1
	QsciScintillaBase__SC_ORDER_CUSTOM                               QsciScintillaBase__ = 2
)

type QsciScintillaBase struct {
	h          *C.QsciScintillaBase
	isSubclass bool
	*qt.QAbstractScrollArea
}

func (this *QsciScintillaBase) cPointer() *C.QsciScintillaBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciScintillaBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciScintillaBase constructs the type using only CGO pointers.
func newQsciScintillaBase(h *C.QsciScintillaBase) *QsciScintillaBase {
	if h == nil {
		return nil
	}
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	C.QsciScintillaBase_virtbase(h, &outptr_QAbstractScrollArea)

	return &QsciScintillaBase{h: h,
		QAbstractScrollArea: qt.UnsafeNewQAbstractScrollArea(unsafe.Pointer(outptr_QAbstractScrollArea))}
}

// UnsafeNewQsciScintillaBase constructs the type using only unsafe pointers.
func UnsafeNewQsciScintillaBase(h unsafe.Pointer) *QsciScintillaBase {
	return newQsciScintillaBase((*C.QsciScintillaBase)(h))
}

// NewQsciScintillaBase constructs a new QsciScintillaBase object.
func NewQsciScintillaBase(parent *qt.QWidget) *QsciScintillaBase {

	ret := newQsciScintillaBase(C.QsciScintillaBase_new((*C.QWidget)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

// NewQsciScintillaBase2 constructs a new QsciScintillaBase object.
func NewQsciScintillaBase2() *QsciScintillaBase {

	ret := newQsciScintillaBase(C.QsciScintillaBase_new2())
	ret.isSubclass = true
	return ret
}

func (this *QsciScintillaBase) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QsciScintillaBase_MetaObject(this.h)))
}

func (this *QsciScintillaBase) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QsciScintillaBase_Metacast(this.h, param1_Cstring))
}

func QsciScintillaBase_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintillaBase_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintillaBase_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintillaBase_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintillaBase_Pool() *QsciScintillaBase {
	return newQsciScintillaBase(C.QsciScintillaBase_Pool())
}

func (this *QsciScintillaBase) ReplaceHorizontalScrollBar(scrollBar *qt.QScrollBar) {
	C.QsciScintillaBase_ReplaceHorizontalScrollBar(this.h, (*C.QScrollBar)(scrollBar.UnsafePointer()))
}

func (this *QsciScintillaBase) ReplaceVerticalScrollBar(scrollBar *qt.QScrollBar) {
	C.QsciScintillaBase_ReplaceVerticalScrollBar(this.h, (*C.QScrollBar)(scrollBar.UnsafePointer()))
}

func (this *QsciScintillaBase) SendScintilla(msg uint) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla(this.h, (C.uint)(msg)))
}

func (this *QsciScintillaBase) SendScintilla2(msg uint, wParam uint64, lParam unsafe.Pointer) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla2(this.h, (C.uint)(msg), (C.ulong)(wParam), lParam))
}

func (this *QsciScintillaBase) SendScintilla3(msg uint, wParam uintptr, lParam string) int64 {
	lParam_Cstring := C.CString(lParam)
	defer C.free(unsafe.Pointer(lParam_Cstring))
	return (int64)(C.QsciScintillaBase_SendScintilla3(this.h, (C.uint)(msg), (C.uintptr_t)(wParam), lParam_Cstring))
}

func (this *QsciScintillaBase) SendScintilla4(msg uint, lParam string) int64 {
	lParam_Cstring := C.CString(lParam)
	defer C.free(unsafe.Pointer(lParam_Cstring))
	return (int64)(C.QsciScintillaBase_SendScintilla4(this.h, (C.uint)(msg), lParam_Cstring))
}

func (this *QsciScintillaBase) SendScintilla5(msg uint, wParam string, lParam string) int64 {
	wParam_Cstring := C.CString(wParam)
	defer C.free(unsafe.Pointer(wParam_Cstring))
	lParam_Cstring := C.CString(lParam)
	defer C.free(unsafe.Pointer(lParam_Cstring))
	return (int64)(C.QsciScintillaBase_SendScintilla5(this.h, (C.uint)(msg), wParam_Cstring, lParam_Cstring))
}

func (this *QsciScintillaBase) SendScintilla6(msg uint, wParam int64) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla6(this.h, (C.uint)(msg), (C.long)(wParam)))
}

func (this *QsciScintillaBase) SendScintilla7(msg uint, wParam int) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla7(this.h, (C.uint)(msg), (C.int)(wParam)))
}

func (this *QsciScintillaBase) SendScintilla8(msg uint, cpMin int64, cpMax int64, lpstrText string) int64 {
	lpstrText_Cstring := C.CString(lpstrText)
	defer C.free(unsafe.Pointer(lpstrText_Cstring))
	return (int64)(C.QsciScintillaBase_SendScintilla8(this.h, (C.uint)(msg), (C.long)(cpMin), (C.long)(cpMax), lpstrText_Cstring))
}

func (this *QsciScintillaBase) SendScintilla9(msg uint, wParam uint64, col *qt.QColor) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla9(this.h, (C.uint)(msg), (C.ulong)(wParam), (*C.QColor)(col.UnsafePointer())))
}

func (this *QsciScintillaBase) SendScintilla10(msg uint, col *qt.QColor) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla10(this.h, (C.uint)(msg), (*C.QColor)(col.UnsafePointer())))
}

func (this *QsciScintillaBase) SendScintilla11(msg uint, wParam uint64, hdc *qt.QPainter, rc *qt.QRect, cpMin int64, cpMax int64) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla11(this.h, (C.uint)(msg), (C.ulong)(wParam), (*C.QPainter)(hdc.UnsafePointer()), (*C.QRect)(rc.UnsafePointer()), (C.long)(cpMin), (C.long)(cpMax)))
}

func (this *QsciScintillaBase) SendScintilla12(msg uint, wParam uint64, lParam *qt.QPixmap) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla12(this.h, (C.uint)(msg), (C.ulong)(wParam), (*C.QPixmap)(lParam.UnsafePointer())))
}

func (this *QsciScintillaBase) SendScintilla13(msg uint, wParam uint64, lParam *qt.QImage) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla13(this.h, (C.uint)(msg), (C.ulong)(wParam), (*C.QImage)(lParam.UnsafePointer())))
}

func (this *QsciScintillaBase) SendScintillaPtrResult(msg uint) unsafe.Pointer {
	return (unsafe.Pointer)(C.QsciScintillaBase_SendScintillaPtrResult(this.h, (C.uint)(msg)))
}

func QsciScintillaBase_CommandKey(qt_key int, modifiers *int) int {
	return (int)(C.QsciScintillaBase_CommandKey((C.int)(qt_key), (*C.int)(unsafe.Pointer(modifiers))))
}

func (this *QsciScintillaBase) QSCN_SELCHANGED(yes bool) {
	C.QsciScintillaBase_QSCN_SELCHANGED(this.h, (C.bool)(yes))
}
func (this *QsciScintillaBase) OnQSCN_SELCHANGED(slot func(yes bool)) {
	C.QsciScintillaBase_connect_QSCN_SELCHANGED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_QSCN_SELCHANGED
func miqt_exec_callback_QsciScintillaBase_QSCN_SELCHANGED(cb C.intptr_t, yes C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(yes bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(yes)

	gofunc(slotval1)
}

func (this *QsciScintillaBase) SCN_AUTOCCANCELLED() {
	C.QsciScintillaBase_SCN_AUTOCCANCELLED(this.h)
}
func (this *QsciScintillaBase) OnSCN_AUTOCCANCELLED(slot func()) {
	C.QsciScintillaBase_connect_SCN_AUTOCCANCELLED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCANCELLED
func miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCANCELLED(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_AUTOCCHARDELETED() {
	C.QsciScintillaBase_SCN_AUTOCCHARDELETED(this.h)
}
func (this *QsciScintillaBase) OnSCN_AUTOCCHARDELETED(slot func()) {
	C.QsciScintillaBase_connect_SCN_AUTOCCHARDELETED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCHARDELETED
func miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCHARDELETED(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_AUTOCCOMPLETED(selection string, position int, ch int, method int) {
	selection_Cstring := C.CString(selection)
	defer C.free(unsafe.Pointer(selection_Cstring))
	C.QsciScintillaBase_SCN_AUTOCCOMPLETED(this.h, selection_Cstring, (C.int)(position), (C.int)(ch), (C.int)(method))
}
func (this *QsciScintillaBase) OnSCN_AUTOCCOMPLETED(slot func(selection string, position int, ch int, method int)) {
	C.QsciScintillaBase_connect_SCN_AUTOCCOMPLETED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCOMPLETED
func miqt_exec_callback_QsciScintillaBase_SCN_AUTOCCOMPLETED(cb C.intptr_t, selection *C.const_char, position C.int, ch C.int, method C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection string, position int, ch int, method int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	selection_ret := selection
	slotval1 := C.GoString(selection_ret)

	slotval2 := (int)(position)

	slotval3 := (int)(ch)

	slotval4 := (int)(method)

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func (this *QsciScintillaBase) SCN_AUTOCSELECTION(selection string, position int, ch int, method int) {
	selection_Cstring := C.CString(selection)
	defer C.free(unsafe.Pointer(selection_Cstring))
	C.QsciScintillaBase_SCN_AUTOCSELECTION(this.h, selection_Cstring, (C.int)(position), (C.int)(ch), (C.int)(method))
}
func (this *QsciScintillaBase) OnSCN_AUTOCSELECTION(slot func(selection string, position int, ch int, method int)) {
	C.QsciScintillaBase_connect_SCN_AUTOCSELECTION(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION
func miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION(cb C.intptr_t, selection *C.const_char, position C.int, ch C.int, method C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection string, position int, ch int, method int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	selection_ret := selection
	slotval1 := C.GoString(selection_ret)

	slotval2 := (int)(position)

	slotval3 := (int)(ch)

	slotval4 := (int)(method)

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func (this *QsciScintillaBase) SCN_AUTOCSELECTION2(selection string, position int) {
	selection_Cstring := C.CString(selection)
	defer C.free(unsafe.Pointer(selection_Cstring))
	C.QsciScintillaBase_SCN_AUTOCSELECTION2(this.h, selection_Cstring, (C.int)(position))
}
func (this *QsciScintillaBase) OnSCN_AUTOCSELECTION2(slot func(selection string, position int)) {
	C.QsciScintillaBase_connect_SCN_AUTOCSELECTION2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION2
func miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTION2(cb C.intptr_t, selection *C.const_char, position C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection string, position int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	selection_ret := selection
	slotval1 := C.GoString(selection_ret)

	slotval2 := (int)(position)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintillaBase) SCN_AUTOCSELECTIONCHANGE(selection string, id int, position int) {
	selection_Cstring := C.CString(selection)
	defer C.free(unsafe.Pointer(selection_Cstring))
	C.QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(this.h, selection_Cstring, (C.int)(id), (C.int)(position))
}
func (this *QsciScintillaBase) OnSCN_AUTOCSELECTIONCHANGE(slot func(selection string, id int, position int)) {
	C.QsciScintillaBase_connect_SCN_AUTOCSELECTIONCHANGE(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE
func miqt_exec_callback_QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(cb C.intptr_t, selection *C.const_char, id C.int, position C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection string, id int, position int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	selection_ret := selection
	slotval1 := C.GoString(selection_ret)

	slotval2 := (int)(id)

	slotval3 := (int)(position)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintillaBase) SCEN_CHANGE() {
	C.QsciScintillaBase_SCEN_CHANGE(this.h)
}
func (this *QsciScintillaBase) OnSCEN_CHANGE(slot func()) {
	C.QsciScintillaBase_connect_SCEN_CHANGE(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCEN_CHANGE
func miqt_exec_callback_QsciScintillaBase_SCEN_CHANGE(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_CALLTIPCLICK(direction int) {
	C.QsciScintillaBase_SCN_CALLTIPCLICK(this.h, (C.int)(direction))
}
func (this *QsciScintillaBase) OnSCN_CALLTIPCLICK(slot func(direction int)) {
	C.QsciScintillaBase_connect_SCN_CALLTIPCLICK(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_CALLTIPCLICK
func miqt_exec_callback_QsciScintillaBase_SCN_CALLTIPCLICK(cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(direction int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(direction)

	gofunc(slotval1)
}

func (this *QsciScintillaBase) SCN_CHARADDED(charadded int) {
	C.QsciScintillaBase_SCN_CHARADDED(this.h, (C.int)(charadded))
}
func (this *QsciScintillaBase) OnSCN_CHARADDED(slot func(charadded int)) {
	C.QsciScintillaBase_connect_SCN_CHARADDED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_CHARADDED
func miqt_exec_callback_QsciScintillaBase_SCN_CHARADDED(cb C.intptr_t, charadded C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(charadded int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(charadded)

	gofunc(slotval1)
}

func (this *QsciScintillaBase) SCN_DOUBLECLICK(position int, line int, modifiers int) {
	C.QsciScintillaBase_SCN_DOUBLECLICK(this.h, (C.int)(position), (C.int)(line), (C.int)(modifiers))
}
func (this *QsciScintillaBase) OnSCN_DOUBLECLICK(slot func(position int, line int, modifiers int)) {
	C.QsciScintillaBase_connect_SCN_DOUBLECLICK(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_DOUBLECLICK
func miqt_exec_callback_QsciScintillaBase_SCN_DOUBLECLICK(cb C.intptr_t, position C.int, line C.int, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, line int, modifiers int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(line)

	slotval3 := (int)(modifiers)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintillaBase) SCN_DWELLEND(position int, x int, y int) {
	C.QsciScintillaBase_SCN_DWELLEND(this.h, (C.int)(position), (C.int)(x), (C.int)(y))
}
func (this *QsciScintillaBase) OnSCN_DWELLEND(slot func(position int, x int, y int)) {
	C.QsciScintillaBase_connect_SCN_DWELLEND(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_DWELLEND
func miqt_exec_callback_QsciScintillaBase_SCN_DWELLEND(cb C.intptr_t, position C.int, x C.int, y C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, x int, y int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(x)

	slotval3 := (int)(y)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintillaBase) SCN_DWELLSTART(position int, x int, y int) {
	C.QsciScintillaBase_SCN_DWELLSTART(this.h, (C.int)(position), (C.int)(x), (C.int)(y))
}
func (this *QsciScintillaBase) OnSCN_DWELLSTART(slot func(position int, x int, y int)) {
	C.QsciScintillaBase_connect_SCN_DWELLSTART(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_DWELLSTART
func miqt_exec_callback_QsciScintillaBase_SCN_DWELLSTART(cb C.intptr_t, position C.int, x C.int, y C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, x int, y int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(x)

	slotval3 := (int)(y)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintillaBase) SCN_FOCUSIN() {
	C.QsciScintillaBase_SCN_FOCUSIN(this.h)
}
func (this *QsciScintillaBase) OnSCN_FOCUSIN(slot func()) {
	C.QsciScintillaBase_connect_SCN_FOCUSIN(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_FOCUSIN
func miqt_exec_callback_QsciScintillaBase_SCN_FOCUSIN(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_FOCUSOUT() {
	C.QsciScintillaBase_SCN_FOCUSOUT(this.h)
}
func (this *QsciScintillaBase) OnSCN_FOCUSOUT(slot func()) {
	C.QsciScintillaBase_connect_SCN_FOCUSOUT(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_FOCUSOUT
func miqt_exec_callback_QsciScintillaBase_SCN_FOCUSOUT(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_HOTSPOTCLICK(position int, modifiers int) {
	C.QsciScintillaBase_SCN_HOTSPOTCLICK(this.h, (C.int)(position), (C.int)(modifiers))
}
func (this *QsciScintillaBase) OnSCN_HOTSPOTCLICK(slot func(position int, modifiers int)) {
	C.QsciScintillaBase_connect_SCN_HOTSPOTCLICK(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTCLICK
func miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTCLICK(cb C.intptr_t, position C.int, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, modifiers int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(modifiers)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintillaBase) SCN_HOTSPOTDOUBLECLICK(position int, modifiers int) {
	C.QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(this.h, (C.int)(position), (C.int)(modifiers))
}
func (this *QsciScintillaBase) OnSCN_HOTSPOTDOUBLECLICK(slot func(position int, modifiers int)) {
	C.QsciScintillaBase_connect_SCN_HOTSPOTDOUBLECLICK(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK
func miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(cb C.intptr_t, position C.int, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, modifiers int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(modifiers)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintillaBase) SCN_HOTSPOTRELEASECLICK(position int, modifiers int) {
	C.QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(this.h, (C.int)(position), (C.int)(modifiers))
}
func (this *QsciScintillaBase) OnSCN_HOTSPOTRELEASECLICK(slot func(position int, modifiers int)) {
	C.QsciScintillaBase_connect_SCN_HOTSPOTRELEASECLICK(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTRELEASECLICK
func miqt_exec_callback_QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(cb C.intptr_t, position C.int, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, modifiers int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(modifiers)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintillaBase) SCN_INDICATORCLICK(position int, modifiers int) {
	C.QsciScintillaBase_SCN_INDICATORCLICK(this.h, (C.int)(position), (C.int)(modifiers))
}
func (this *QsciScintillaBase) OnSCN_INDICATORCLICK(slot func(position int, modifiers int)) {
	C.QsciScintillaBase_connect_SCN_INDICATORCLICK(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_INDICATORCLICK
func miqt_exec_callback_QsciScintillaBase_SCN_INDICATORCLICK(cb C.intptr_t, position C.int, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, modifiers int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(modifiers)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintillaBase) SCN_INDICATORRELEASE(position int, modifiers int) {
	C.QsciScintillaBase_SCN_INDICATORRELEASE(this.h, (C.int)(position), (C.int)(modifiers))
}
func (this *QsciScintillaBase) OnSCN_INDICATORRELEASE(slot func(position int, modifiers int)) {
	C.QsciScintillaBase_connect_SCN_INDICATORRELEASE(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_INDICATORRELEASE
func miqt_exec_callback_QsciScintillaBase_SCN_INDICATORRELEASE(cb C.intptr_t, position C.int, modifiers C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, modifiers int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(modifiers)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintillaBase) SCN_MACRORECORD(param1 uint, param2 uint64, param3 unsafe.Pointer) {
	C.QsciScintillaBase_SCN_MACRORECORD(this.h, (C.uint)(param1), (C.ulong)(param2), param3)
}
func (this *QsciScintillaBase) OnSCN_MACRORECORD(slot func(param1 uint, param2 uint64, param3 unsafe.Pointer)) {
	C.QsciScintillaBase_connect_SCN_MACRORECORD(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_MACRORECORD
func miqt_exec_callback_QsciScintillaBase_SCN_MACRORECORD(cb C.intptr_t, param1 C.uint, param2 C.ulong, param3 unsafe.Pointer) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 uint, param2 uint64, param3 unsafe.Pointer))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (uint)(param1)

	slotval2 := (uint64)(param2)

	slotval3 := (unsafe.Pointer)(param3)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintillaBase) SCN_MARGINCLICK(position int, modifiers int, margin int) {
	C.QsciScintillaBase_SCN_MARGINCLICK(this.h, (C.int)(position), (C.int)(modifiers), (C.int)(margin))
}
func (this *QsciScintillaBase) OnSCN_MARGINCLICK(slot func(position int, modifiers int, margin int)) {
	C.QsciScintillaBase_connect_SCN_MARGINCLICK(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_MARGINCLICK
func miqt_exec_callback_QsciScintillaBase_SCN_MARGINCLICK(cb C.intptr_t, position C.int, modifiers C.int, margin C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, modifiers int, margin int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(modifiers)

	slotval3 := (int)(margin)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintillaBase) SCN_MARGINRIGHTCLICK(position int, modifiers int, margin int) {
	C.QsciScintillaBase_SCN_MARGINRIGHTCLICK(this.h, (C.int)(position), (C.int)(modifiers), (C.int)(margin))
}
func (this *QsciScintillaBase) OnSCN_MARGINRIGHTCLICK(slot func(position int, modifiers int, margin int)) {
	C.QsciScintillaBase_connect_SCN_MARGINRIGHTCLICK(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_MARGINRIGHTCLICK
func miqt_exec_callback_QsciScintillaBase_SCN_MARGINRIGHTCLICK(cb C.intptr_t, position C.int, modifiers C.int, margin C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int, modifiers int, margin int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	slotval2 := (int)(modifiers)

	slotval3 := (int)(margin)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QsciScintillaBase) SCN_MODIFIED(param1 int, param2 int, param3 string, param4 int, param5 int, param6 int, param7 int, param8 int, param9 int, param10 int) {
	param3_Cstring := C.CString(param3)
	defer C.free(unsafe.Pointer(param3_Cstring))
	C.QsciScintillaBase_SCN_MODIFIED(this.h, (C.int)(param1), (C.int)(param2), param3_Cstring, (C.int)(param4), (C.int)(param5), (C.int)(param6), (C.int)(param7), (C.int)(param8), (C.int)(param9), (C.int)(param10))
}
func (this *QsciScintillaBase) OnSCN_MODIFIED(slot func(param1 int, param2 int, param3 string, param4 int, param5 int, param6 int, param7 int, param8 int, param9 int, param10 int)) {
	C.QsciScintillaBase_connect_SCN_MODIFIED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_MODIFIED
func miqt_exec_callback_QsciScintillaBase_SCN_MODIFIED(cb C.intptr_t, param1 C.int, param2 C.int, param3 *C.const_char, param4 C.int, param5 C.int, param6 C.int, param7 C.int, param8 C.int, param9 C.int, param10 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int, param2 int, param3 string, param4 int, param5 int, param6 int, param7 int, param8 int, param9 int, param10 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	slotval2 := (int)(param2)

	param3_ret := param3
	slotval3 := C.GoString(param3_ret)

	slotval4 := (int)(param4)

	slotval5 := (int)(param5)

	slotval6 := (int)(param6)

	slotval7 := (int)(param7)

	slotval8 := (int)(param8)

	slotval9 := (int)(param9)

	slotval10 := (int)(param10)

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5, slotval6, slotval7, slotval8, slotval9, slotval10)
}

func (this *QsciScintillaBase) SCN_MODIFYATTEMPTRO() {
	C.QsciScintillaBase_SCN_MODIFYATTEMPTRO(this.h)
}
func (this *QsciScintillaBase) OnSCN_MODIFYATTEMPTRO(slot func()) {
	C.QsciScintillaBase_connect_SCN_MODIFYATTEMPTRO(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_MODIFYATTEMPTRO
func miqt_exec_callback_QsciScintillaBase_SCN_MODIFYATTEMPTRO(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_NEEDSHOWN(param1 int, param2 int) {
	C.QsciScintillaBase_SCN_NEEDSHOWN(this.h, (C.int)(param1), (C.int)(param2))
}
func (this *QsciScintillaBase) OnSCN_NEEDSHOWN(slot func(param1 int, param2 int)) {
	C.QsciScintillaBase_connect_SCN_NEEDSHOWN(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_NEEDSHOWN
func miqt_exec_callback_QsciScintillaBase_SCN_NEEDSHOWN(cb C.intptr_t, param1 C.int, param2 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int, param2 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	slotval2 := (int)(param2)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintillaBase) SCN_PAINTED() {
	C.QsciScintillaBase_SCN_PAINTED(this.h)
}
func (this *QsciScintillaBase) OnSCN_PAINTED(slot func()) {
	C.QsciScintillaBase_connect_SCN_PAINTED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_PAINTED
func miqt_exec_callback_QsciScintillaBase_SCN_PAINTED(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_SAVEPOINTLEFT() {
	C.QsciScintillaBase_SCN_SAVEPOINTLEFT(this.h)
}
func (this *QsciScintillaBase) OnSCN_SAVEPOINTLEFT(slot func()) {
	C.QsciScintillaBase_connect_SCN_SAVEPOINTLEFT(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTLEFT
func miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTLEFT(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_SAVEPOINTREACHED() {
	C.QsciScintillaBase_SCN_SAVEPOINTREACHED(this.h)
}
func (this *QsciScintillaBase) OnSCN_SAVEPOINTREACHED(slot func()) {
	C.QsciScintillaBase_connect_SCN_SAVEPOINTREACHED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTREACHED
func miqt_exec_callback_QsciScintillaBase_SCN_SAVEPOINTREACHED(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QsciScintillaBase) SCN_STYLENEEDED(position int) {
	C.QsciScintillaBase_SCN_STYLENEEDED(this.h, (C.int)(position))
}
func (this *QsciScintillaBase) OnSCN_STYLENEEDED(slot func(position int)) {
	C.QsciScintillaBase_connect_SCN_STYLENEEDED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_STYLENEEDED
func miqt_exec_callback_QsciScintillaBase_SCN_STYLENEEDED(cb C.intptr_t, position C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(position int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(position)

	gofunc(slotval1)
}

func (this *QsciScintillaBase) SCN_URIDROPPED(url *qt.QUrl) {
	C.QsciScintillaBase_SCN_URIDROPPED(this.h, (*C.QUrl)(url.UnsafePointer()))
}
func (this *QsciScintillaBase) OnSCN_URIDROPPED(slot func(url *qt.QUrl)) {
	C.QsciScintillaBase_connect_SCN_URIDROPPED(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_URIDROPPED
func miqt_exec_callback_QsciScintillaBase_SCN_URIDROPPED(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func (this *QsciScintillaBase) SCN_UPDATEUI(updated int) {
	C.QsciScintillaBase_SCN_UPDATEUI(this.h, (C.int)(updated))
}
func (this *QsciScintillaBase) OnSCN_UPDATEUI(slot func(updated int)) {
	C.QsciScintillaBase_connect_SCN_UPDATEUI(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_UPDATEUI
func miqt_exec_callback_QsciScintillaBase_SCN_UPDATEUI(cb C.intptr_t, updated C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(updated int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(updated)

	gofunc(slotval1)
}

func (this *QsciScintillaBase) SCN_USERLISTSELECTION(selection string, id int, ch int, method int, position int) {
	selection_Cstring := C.CString(selection)
	defer C.free(unsafe.Pointer(selection_Cstring))
	C.QsciScintillaBase_SCN_USERLISTSELECTION(this.h, selection_Cstring, (C.int)(id), (C.int)(ch), (C.int)(method), (C.int)(position))
}
func (this *QsciScintillaBase) OnSCN_USERLISTSELECTION(slot func(selection string, id int, ch int, method int, position int)) {
	C.QsciScintillaBase_connect_SCN_USERLISTSELECTION(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION
func miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION(cb C.intptr_t, selection *C.const_char, id C.int, ch C.int, method C.int, position C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection string, id int, ch int, method int, position int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	selection_ret := selection
	slotval1 := C.GoString(selection_ret)

	slotval2 := (int)(id)

	slotval3 := (int)(ch)

	slotval4 := (int)(method)

	slotval5 := (int)(position)

	gofunc(slotval1, slotval2, slotval3, slotval4, slotval5)
}

func (this *QsciScintillaBase) SCN_USERLISTSELECTION2(selection string, id int, ch int, method int) {
	selection_Cstring := C.CString(selection)
	defer C.free(unsafe.Pointer(selection_Cstring))
	C.QsciScintillaBase_SCN_USERLISTSELECTION2(this.h, selection_Cstring, (C.int)(id), (C.int)(ch), (C.int)(method))
}
func (this *QsciScintillaBase) OnSCN_USERLISTSELECTION2(slot func(selection string, id int, ch int, method int)) {
	C.QsciScintillaBase_connect_SCN_USERLISTSELECTION2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION2
func miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION2(cb C.intptr_t, selection *C.const_char, id C.int, ch C.int, method C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection string, id int, ch int, method int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	selection_ret := selection
	slotval1 := C.GoString(selection_ret)

	slotval2 := (int)(id)

	slotval3 := (int)(ch)

	slotval4 := (int)(method)

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func (this *QsciScintillaBase) SCN_USERLISTSELECTION3(selection string, id int) {
	selection_Cstring := C.CString(selection)
	defer C.free(unsafe.Pointer(selection_Cstring))
	C.QsciScintillaBase_SCN_USERLISTSELECTION3(this.h, selection_Cstring, (C.int)(id))
}
func (this *QsciScintillaBase) OnSCN_USERLISTSELECTION3(slot func(selection string, id int)) {
	C.QsciScintillaBase_connect_SCN_USERLISTSELECTION3(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION3
func miqt_exec_callback_QsciScintillaBase_SCN_USERLISTSELECTION3(cb C.intptr_t, selection *C.const_char, id C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(selection string, id int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	selection_ret := selection
	slotval1 := C.GoString(selection_ret)

	slotval2 := (int)(id)

	gofunc(slotval1, slotval2)
}

func (this *QsciScintillaBase) SCN_ZOOM() {
	C.QsciScintillaBase_SCN_ZOOM(this.h)
}
func (this *QsciScintillaBase) OnSCN_ZOOM(slot func()) {
	C.QsciScintillaBase_connect_SCN_ZOOM(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SCN_ZOOM
func miqt_exec_callback_QsciScintillaBase_SCN_ZOOM(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QsciScintillaBase_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintillaBase_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintillaBase_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintillaBase_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintillaBase_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintillaBase_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QsciScintillaBase_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QsciScintillaBase_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QsciScintillaBase) SendScintilla22(msg uint, wParam uint64) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla22(this.h, (C.uint)(msg), (C.ulong)(wParam)))
}

func (this *QsciScintillaBase) SendScintilla32(msg uint, wParam uint64, lParam int64) int64 {
	return (int64)(C.QsciScintillaBase_SendScintilla32(this.h, (C.uint)(msg), (C.ulong)(wParam), (C.long)(lParam)))
}

func (this *QsciScintillaBase) callVirtualBase_CanInsertFromMimeData(source *qt.QMimeData) bool {

	return (bool)(C.QsciScintillaBase_virtualbase_CanInsertFromMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(source.UnsafePointer())))

}
func (this *QsciScintillaBase) OnCanInsertFromMimeData(slot func(super func(source *qt.QMimeData) bool, source *qt.QMimeData) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_CanInsertFromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_CanInsertFromMimeData
func miqt_exec_callback_QsciScintillaBase_CanInsertFromMimeData(self *C.QsciScintillaBase, cb C.intptr_t, source *C.QMimeData) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *qt.QMimeData) bool, source *qt.QMimeData) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMimeData(unsafe.Pointer(source))

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_CanInsertFromMimeData, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintillaBase) callVirtualBase_FromMimeData(source *qt.QMimeData, rectangular *bool) []byte {

	var _bytearray C.struct_miqt_string = C.QsciScintillaBase_virtualbase_FromMimeData(unsafe.Pointer(this.h), (*C.QMimeData)(source.UnsafePointer()), (*C.bool)(unsafe.Pointer(rectangular)))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}
func (this *QsciScintillaBase) OnFromMimeData(slot func(super func(source *qt.QMimeData, rectangular *bool) []byte, source *qt.QMimeData, rectangular *bool) []byte) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_FromMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_FromMimeData
func miqt_exec_callback_QsciScintillaBase_FromMimeData(self *C.QsciScintillaBase, cb C.intptr_t, source *C.QMimeData, rectangular *C.bool) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *qt.QMimeData, rectangular *bool) []byte, source *qt.QMimeData, rectangular *bool) []byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMimeData(unsafe.Pointer(source))

	slotval2 := (*bool)(unsafe.Pointer(rectangular))

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_FromMimeData, slotval1, slotval2)
	virtualReturn_alias := C.struct_miqt_string{}
	virtualReturn_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[0]))
	virtualReturn_alias.len = C.size_t(len(virtualReturn))

	return virtualReturn_alias

}

func (this *QsciScintillaBase) callVirtualBase_ToMimeData(text []byte, rectangular bool) *qt.QMimeData {
	text_alias := C.struct_miqt_string{}
	text_alias.data = (*C.char)(unsafe.Pointer(&text[0]))
	text_alias.len = C.size_t(len(text))

	return qt.UnsafeNewQMimeData(unsafe.Pointer(C.QsciScintillaBase_virtualbase_ToMimeData(unsafe.Pointer(this.h), text_alias, (C.bool)(rectangular))))

}
func (this *QsciScintillaBase) OnToMimeData(slot func(super func(text []byte, rectangular bool) *qt.QMimeData, text []byte, rectangular bool) *qt.QMimeData) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_ToMimeData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_ToMimeData
func miqt_exec_callback_QsciScintillaBase_ToMimeData(self *C.QsciScintillaBase, cb C.intptr_t, text C.struct_miqt_string, rectangular C.bool) *C.QMimeData {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(text []byte, rectangular bool) *qt.QMimeData, text []byte, rectangular bool) *qt.QMimeData)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var text_bytearray C.struct_miqt_string = text
	text_ret := C.GoBytes(unsafe.Pointer(text_bytearray.data), C.int(int64(text_bytearray.len)))
	C.free(unsafe.Pointer(text_bytearray.data))
	slotval1 := text_ret
	slotval2 := (bool)(rectangular)

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_ToMimeData, slotval1, slotval2)

	return (*C.QMimeData)(virtualReturn.UnsafePointer())

}

func (this *QsciScintillaBase) callVirtualBase_ChangeEvent(e *qt.QEvent) {

	C.QsciScintillaBase_virtualbase_ChangeEvent(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnChangeEvent(slot func(super func(e *qt.QEvent), e *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_ChangeEvent
func miqt_exec_callback_QsciScintillaBase_ChangeEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QEvent), e *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_ContextMenuEvent(e *qt.QContextMenuEvent) {

	C.QsciScintillaBase_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnContextMenuEvent(slot func(super func(e *qt.QContextMenuEvent), e *qt.QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_ContextMenuEvent
func miqt_exec_callback_QsciScintillaBase_ContextMenuEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QContextMenuEvent), e *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_DragEnterEvent(e *qt.QDragEnterEvent) {

	C.QsciScintillaBase_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnDragEnterEvent(slot func(super func(e *qt.QDragEnterEvent), e *qt.QDragEnterEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_DragEnterEvent
func miqt_exec_callback_QsciScintillaBase_DragEnterEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QDragEnterEvent), e *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_DragLeaveEvent(e *qt.QDragLeaveEvent) {

	C.QsciScintillaBase_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnDragLeaveEvent(slot func(super func(e *qt.QDragLeaveEvent), e *qt.QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_DragLeaveEvent
func miqt_exec_callback_QsciScintillaBase_DragLeaveEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QDragLeaveEvent), e *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_DragMoveEvent(e *qt.QDragMoveEvent) {

	C.QsciScintillaBase_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnDragMoveEvent(slot func(super func(e *qt.QDragMoveEvent), e *qt.QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_DragMoveEvent
func miqt_exec_callback_QsciScintillaBase_DragMoveEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QDragMoveEvent), e *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_DropEvent(e *qt.QDropEvent) {

	C.QsciScintillaBase_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnDropEvent(slot func(super func(e *qt.QDropEvent), e *qt.QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_DropEvent
func miqt_exec_callback_QsciScintillaBase_DropEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QDropEvent), e *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_FocusInEvent(e *qt.QFocusEvent) {

	C.QsciScintillaBase_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnFocusInEvent(slot func(super func(e *qt.QFocusEvent), e *qt.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_FocusInEvent
func miqt_exec_callback_QsciScintillaBase_FocusInEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QFocusEvent), e *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_FocusOutEvent(e *qt.QFocusEvent) {

	C.QsciScintillaBase_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnFocusOutEvent(slot func(super func(e *qt.QFocusEvent), e *qt.QFocusEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_FocusOutEvent
func miqt_exec_callback_QsciScintillaBase_FocusOutEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QFocusEvent), e *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QsciScintillaBase_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QsciScintillaBase) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_FocusNextPrevChild
func miqt_exec_callback_QsciScintillaBase_FocusNextPrevChild(self *C.QsciScintillaBase, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintillaBase) callVirtualBase_KeyPressEvent(e *qt.QKeyEvent) {

	C.QsciScintillaBase_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnKeyPressEvent(slot func(super func(e *qt.QKeyEvent), e *qt.QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_KeyPressEvent
func miqt_exec_callback_QsciScintillaBase_KeyPressEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QKeyEvent), e *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_InputMethodEvent(event *qt.QInputMethodEvent) {

	C.QsciScintillaBase_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *QsciScintillaBase) OnInputMethodEvent(slot func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_InputMethodEvent
func miqt_exec_callback_QsciScintillaBase_InputMethodEvent(self *C.QsciScintillaBase, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_InputMethodQuery(query qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QsciScintillaBase_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintillaBase) OnInputMethodQuery(slot func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_InputMethodQuery
func miqt_exec_callback_QsciScintillaBase_InputMethodQuery(self *C.QsciScintillaBase, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(query)

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QsciScintillaBase) callVirtualBase_MouseDoubleClickEvent(e *qt.QMouseEvent) {

	C.QsciScintillaBase_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnMouseDoubleClickEvent(slot func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_MouseDoubleClickEvent
func miqt_exec_callback_QsciScintillaBase_MouseDoubleClickEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_MouseMoveEvent(e *qt.QMouseEvent) {

	C.QsciScintillaBase_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnMouseMoveEvent(slot func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_MouseMoveEvent
func miqt_exec_callback_QsciScintillaBase_MouseMoveEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_MousePressEvent(e *qt.QMouseEvent) {

	C.QsciScintillaBase_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnMousePressEvent(slot func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_MousePressEvent
func miqt_exec_callback_QsciScintillaBase_MousePressEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_MouseReleaseEvent(e *qt.QMouseEvent) {

	C.QsciScintillaBase_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnMouseReleaseEvent(slot func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_MouseReleaseEvent
func miqt_exec_callback_QsciScintillaBase_MouseReleaseEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QMouseEvent), e *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_PaintEvent(e *qt.QPaintEvent) {

	C.QsciScintillaBase_virtualbase_PaintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnPaintEvent(slot func(super func(e *qt.QPaintEvent), e *qt.QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_PaintEvent
func miqt_exec_callback_QsciScintillaBase_PaintEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QPaintEvent), e *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_ResizeEvent(e *qt.QResizeEvent) {

	C.QsciScintillaBase_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(e.UnsafePointer()))

}
func (this *QsciScintillaBase) OnResizeEvent(slot func(super func(e *qt.QResizeEvent), e *qt.QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_ResizeEvent
func miqt_exec_callback_QsciScintillaBase_ResizeEvent(self *C.QsciScintillaBase, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QResizeEvent), e *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(e))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QsciScintillaBase_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QsciScintillaBase) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_ScrollContentsBy
func miqt_exec_callback_QsciScintillaBase_ScrollContentsBy(self *C.QsciScintillaBase, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QsciScintillaBase) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QsciScintillaBase_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintillaBase) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_MinimumSizeHint
func miqt_exec_callback_QsciScintillaBase_MinimumSizeHint(self *C.QsciScintillaBase, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QsciScintillaBase) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QsciScintillaBase_virtualbase_SizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintillaBase) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SizeHint
func miqt_exec_callback_QsciScintillaBase_SizeHint(self *C.QsciScintillaBase, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QsciScintillaBase) callVirtualBase_SetupViewport(viewport *qt.QWidget) {

	C.QsciScintillaBase_virtualbase_SetupViewport(unsafe.Pointer(this.h), (*C.QWidget)(viewport.UnsafePointer()))

}
func (this *QsciScintillaBase) OnSetupViewport(slot func(super func(viewport *qt.QWidget), viewport *qt.QWidget)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_SetupViewport(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_SetupViewport
func miqt_exec_callback_QsciScintillaBase_SetupViewport(self *C.QsciScintillaBase, cb C.intptr_t, viewport *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(viewport *qt.QWidget), viewport *qt.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(viewport))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_SetupViewport, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QsciScintillaBase_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QsciScintillaBase) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_EventFilter
func miqt_exec_callback_QsciScintillaBase_EventFilter(self *C.QsciScintillaBase, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintillaBase) callVirtualBase_Event(param1 *qt.QEvent) bool {

	return (bool)(C.QsciScintillaBase_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QsciScintillaBase) OnEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_Event
func miqt_exec_callback_QsciScintillaBase_Event(self *C.QsciScintillaBase, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintillaBase) callVirtualBase_ViewportEvent(param1 *qt.QEvent) bool {

	return (bool)(C.QsciScintillaBase_virtualbase_ViewportEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QsciScintillaBase) OnViewportEvent(slot func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_ViewportEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_ViewportEvent
func miqt_exec_callback_QsciScintillaBase_ViewportEvent(self *C.QsciScintillaBase, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent) bool, param1 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_ViewportEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QsciScintillaBase) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QsciScintillaBase_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QsciScintillaBase) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_WheelEvent
func miqt_exec_callback_QsciScintillaBase_WheelEvent(self *C.QsciScintillaBase, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QsciScintillaBase{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QsciScintillaBase) callVirtualBase_ViewportSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QsciScintillaBase_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QsciScintillaBase) OnViewportSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QsciScintillaBase_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QsciScintillaBase_ViewportSizeHint
func miqt_exec_callback_QsciScintillaBase_ViewportSizeHint(self *C.QsciScintillaBase, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QsciScintillaBase{h: self}).callVirtualBase_ViewportSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QsciScintillaBase) Delete() {
	C.QsciScintillaBase_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciScintillaBase) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciScintillaBase) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
