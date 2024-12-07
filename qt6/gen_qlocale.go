package qt6

/*

#include "gen_qlocale.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLocale__Language uint16

const (
	QLocale__AnyLanguage               QLocale__Language = 0
	QLocale__C                         QLocale__Language = 1
	QLocale__Abkhazian                 QLocale__Language = 2
	QLocale__Afar                      QLocale__Language = 3
	QLocale__Afrikaans                 QLocale__Language = 4
	QLocale__Aghem                     QLocale__Language = 5
	QLocale__Akan                      QLocale__Language = 6
	QLocale__Akkadian                  QLocale__Language = 7
	QLocale__Akoose                    QLocale__Language = 8
	QLocale__Albanian                  QLocale__Language = 9
	QLocale__AmericanSignLanguage      QLocale__Language = 10
	QLocale__Amharic                   QLocale__Language = 11
	QLocale__AncientEgyptian           QLocale__Language = 12
	QLocale__AncientGreek              QLocale__Language = 13
	QLocale__Arabic                    QLocale__Language = 14
	QLocale__Aragonese                 QLocale__Language = 15
	QLocale__Aramaic                   QLocale__Language = 16
	QLocale__Armenian                  QLocale__Language = 17
	QLocale__Assamese                  QLocale__Language = 18
	QLocale__Asturian                  QLocale__Language = 19
	QLocale__Asu                       QLocale__Language = 20
	QLocale__Atsam                     QLocale__Language = 21
	QLocale__Avaric                    QLocale__Language = 22
	QLocale__Avestan                   QLocale__Language = 23
	QLocale__Aymara                    QLocale__Language = 24
	QLocale__Azerbaijani               QLocale__Language = 25
	QLocale__Bafia                     QLocale__Language = 26
	QLocale__Balinese                  QLocale__Language = 27
	QLocale__Bambara                   QLocale__Language = 28
	QLocale__Bamun                     QLocale__Language = 29
	QLocale__Bangla                    QLocale__Language = 30
	QLocale__Basaa                     QLocale__Language = 31
	QLocale__Bashkir                   QLocale__Language = 32
	QLocale__Basque                    QLocale__Language = 33
	QLocale__BatakToba                 QLocale__Language = 34
	QLocale__Belarusian                QLocale__Language = 35
	QLocale__Bemba                     QLocale__Language = 36
	QLocale__Bena                      QLocale__Language = 37
	QLocale__Bhojpuri                  QLocale__Language = 38
	QLocale__Bislama                   QLocale__Language = 39
	QLocale__Blin                      QLocale__Language = 40
	QLocale__Bodo                      QLocale__Language = 41
	QLocale__Bosnian                   QLocale__Language = 42
	QLocale__Breton                    QLocale__Language = 43
	QLocale__Buginese                  QLocale__Language = 44
	QLocale__Bulgarian                 QLocale__Language = 45
	QLocale__Burmese                   QLocale__Language = 46
	QLocale__Cantonese                 QLocale__Language = 47
	QLocale__Catalan                   QLocale__Language = 48
	QLocale__Cebuano                   QLocale__Language = 49
	QLocale__CentralAtlasTamazight     QLocale__Language = 50
	QLocale__CentralKurdish            QLocale__Language = 51
	QLocale__Chakma                    QLocale__Language = 52
	QLocale__Chamorro                  QLocale__Language = 53
	QLocale__Chechen                   QLocale__Language = 54
	QLocale__Cherokee                  QLocale__Language = 55
	QLocale__Chickasaw                 QLocale__Language = 56
	QLocale__Chiga                     QLocale__Language = 57
	QLocale__Chinese                   QLocale__Language = 58
	QLocale__Church                    QLocale__Language = 59
	QLocale__Chuvash                   QLocale__Language = 60
	QLocale__Colognian                 QLocale__Language = 61
	QLocale__Coptic                    QLocale__Language = 62
	QLocale__Cornish                   QLocale__Language = 63
	QLocale__Corsican                  QLocale__Language = 64
	QLocale__Cree                      QLocale__Language = 65
	QLocale__Croatian                  QLocale__Language = 66
	QLocale__Czech                     QLocale__Language = 67
	QLocale__Danish                    QLocale__Language = 68
	QLocale__Divehi                    QLocale__Language = 69
	QLocale__Dogri                     QLocale__Language = 70
	QLocale__Duala                     QLocale__Language = 71
	QLocale__Dutch                     QLocale__Language = 72
	QLocale__Dzongkha                  QLocale__Language = 73
	QLocale__Embu                      QLocale__Language = 74
	QLocale__English                   QLocale__Language = 75
	QLocale__Erzya                     QLocale__Language = 76
	QLocale__Esperanto                 QLocale__Language = 77
	QLocale__Estonian                  QLocale__Language = 78
	QLocale__Ewe                       QLocale__Language = 79
	QLocale__Ewondo                    QLocale__Language = 80
	QLocale__Faroese                   QLocale__Language = 81
	QLocale__Fijian                    QLocale__Language = 82
	QLocale__Filipino                  QLocale__Language = 83
	QLocale__Finnish                   QLocale__Language = 84
	QLocale__French                    QLocale__Language = 85
	QLocale__Friulian                  QLocale__Language = 86
	QLocale__Fulah                     QLocale__Language = 87
	QLocale__Gaelic                    QLocale__Language = 88
	QLocale__Ga                        QLocale__Language = 89
	QLocale__Galician                  QLocale__Language = 90
	QLocale__Ganda                     QLocale__Language = 91
	QLocale__Geez                      QLocale__Language = 92
	QLocale__Georgian                  QLocale__Language = 93
	QLocale__German                    QLocale__Language = 94
	QLocale__Gothic                    QLocale__Language = 95
	QLocale__Greek                     QLocale__Language = 96
	QLocale__Guarani                   QLocale__Language = 97
	QLocale__Gujarati                  QLocale__Language = 98
	QLocale__Gusii                     QLocale__Language = 99
	QLocale__Haitian                   QLocale__Language = 100
	QLocale__Hausa                     QLocale__Language = 101
	QLocale__Hawaiian                  QLocale__Language = 102
	QLocale__Hebrew                    QLocale__Language = 103
	QLocale__Herero                    QLocale__Language = 104
	QLocale__Hindi                     QLocale__Language = 105
	QLocale__HiriMotu                  QLocale__Language = 106
	QLocale__Hungarian                 QLocale__Language = 107
	QLocale__Icelandic                 QLocale__Language = 108
	QLocale__Ido                       QLocale__Language = 109
	QLocale__Igbo                      QLocale__Language = 110
	QLocale__InariSami                 QLocale__Language = 111
	QLocale__Indonesian                QLocale__Language = 112
	QLocale__Ingush                    QLocale__Language = 113
	QLocale__Interlingua               QLocale__Language = 114
	QLocale__Interlingue               QLocale__Language = 115
	QLocale__Inuktitut                 QLocale__Language = 116
	QLocale__Inupiaq                   QLocale__Language = 117
	QLocale__Irish                     QLocale__Language = 118
	QLocale__Italian                   QLocale__Language = 119
	QLocale__Japanese                  QLocale__Language = 120
	QLocale__Javanese                  QLocale__Language = 121
	QLocale__Jju                       QLocale__Language = 122
	QLocale__JolaFonyi                 QLocale__Language = 123
	QLocale__Kabuverdianu              QLocale__Language = 124
	QLocale__Kabyle                    QLocale__Language = 125
	QLocale__Kako                      QLocale__Language = 126
	QLocale__Kalaallisut               QLocale__Language = 127
	QLocale__Kalenjin                  QLocale__Language = 128
	QLocale__Kamba                     QLocale__Language = 129
	QLocale__Kannada                   QLocale__Language = 130
	QLocale__Kanuri                    QLocale__Language = 131
	QLocale__Kashmiri                  QLocale__Language = 132
	QLocale__Kazakh                    QLocale__Language = 133
	QLocale__Kenyang                   QLocale__Language = 134
	QLocale__Khmer                     QLocale__Language = 135
	QLocale__Kiche                     QLocale__Language = 136
	QLocale__Kikuyu                    QLocale__Language = 137
	QLocale__Kinyarwanda               QLocale__Language = 138
	QLocale__Komi                      QLocale__Language = 139
	QLocale__Kongo                     QLocale__Language = 140
	QLocale__Konkani                   QLocale__Language = 141
	QLocale__Korean                    QLocale__Language = 142
	QLocale__Koro                      QLocale__Language = 143
	QLocale__KoyraboroSenni            QLocale__Language = 144
	QLocale__KoyraChiini               QLocale__Language = 145
	QLocale__Kpelle                    QLocale__Language = 146
	QLocale__Kuanyama                  QLocale__Language = 147
	QLocale__Kurdish                   QLocale__Language = 148
	QLocale__Kwasio                    QLocale__Language = 149
	QLocale__Kyrgyz                    QLocale__Language = 150
	QLocale__Lakota                    QLocale__Language = 151
	QLocale__Langi                     QLocale__Language = 152
	QLocale__Lao                       QLocale__Language = 153
	QLocale__Latin                     QLocale__Language = 154
	QLocale__Latvian                   QLocale__Language = 155
	QLocale__Lezghian                  QLocale__Language = 156
	QLocale__Limburgish                QLocale__Language = 157
	QLocale__Lingala                   QLocale__Language = 158
	QLocale__LiteraryChinese           QLocale__Language = 159
	QLocale__Lithuanian                QLocale__Language = 160
	QLocale__Lojban                    QLocale__Language = 161
	QLocale__LowerSorbian              QLocale__Language = 162
	QLocale__LowGerman                 QLocale__Language = 163
	QLocale__LubaKatanga               QLocale__Language = 164
	QLocale__LuleSami                  QLocale__Language = 165
	QLocale__Luo                       QLocale__Language = 166
	QLocale__Luxembourgish             QLocale__Language = 167
	QLocale__Luyia                     QLocale__Language = 168
	QLocale__Macedonian                QLocale__Language = 169
	QLocale__Machame                   QLocale__Language = 170
	QLocale__Maithili                  QLocale__Language = 171
	QLocale__MakhuwaMeetto             QLocale__Language = 172
	QLocale__Makonde                   QLocale__Language = 173
	QLocale__Malagasy                  QLocale__Language = 174
	QLocale__Malayalam                 QLocale__Language = 175
	QLocale__Malay                     QLocale__Language = 176
	QLocale__Maltese                   QLocale__Language = 177
	QLocale__Mandingo                  QLocale__Language = 178
	QLocale__Manipuri                  QLocale__Language = 179
	QLocale__Manx                      QLocale__Language = 180
	QLocale__Maori                     QLocale__Language = 181
	QLocale__Mapuche                   QLocale__Language = 182
	QLocale__Marathi                   QLocale__Language = 183
	QLocale__Marshallese               QLocale__Language = 184
	QLocale__Masai                     QLocale__Language = 185
	QLocale__Mazanderani               QLocale__Language = 186
	QLocale__Mende                     QLocale__Language = 187
	QLocale__Meru                      QLocale__Language = 188
	QLocale__Meta                      QLocale__Language = 189
	QLocale__Mohawk                    QLocale__Language = 190
	QLocale__Mongolian                 QLocale__Language = 191
	QLocale__Morisyen                  QLocale__Language = 192
	QLocale__Mundang                   QLocale__Language = 193
	QLocale__Muscogee                  QLocale__Language = 194
	QLocale__Nama                      QLocale__Language = 195
	QLocale__NauruLanguage             QLocale__Language = 196
	QLocale__Navajo                    QLocale__Language = 197
	QLocale__Ndonga                    QLocale__Language = 198
	QLocale__Nepali                    QLocale__Language = 199
	QLocale__Newari                    QLocale__Language = 200
	QLocale__Ngiemboon                 QLocale__Language = 201
	QLocale__Ngomba                    QLocale__Language = 202
	QLocale__NigerianPidgin            QLocale__Language = 203
	QLocale__Nko                       QLocale__Language = 204
	QLocale__NorthernLuri              QLocale__Language = 205
	QLocale__NorthernSami              QLocale__Language = 206
	QLocale__NorthernSotho             QLocale__Language = 207
	QLocale__NorthNdebele              QLocale__Language = 208
	QLocale__NorwegianBokmal           QLocale__Language = 209
	QLocale__NorwegianNynorsk          QLocale__Language = 210
	QLocale__Nuer                      QLocale__Language = 211
	QLocale__Nyanja                    QLocale__Language = 212
	QLocale__Nyankole                  QLocale__Language = 213
	QLocale__Occitan                   QLocale__Language = 214
	QLocale__Odia                      QLocale__Language = 215
	QLocale__Ojibwa                    QLocale__Language = 216
	QLocale__OldIrish                  QLocale__Language = 217
	QLocale__OldNorse                  QLocale__Language = 218
	QLocale__OldPersian                QLocale__Language = 219
	QLocale__Oromo                     QLocale__Language = 220
	QLocale__Osage                     QLocale__Language = 221
	QLocale__Ossetic                   QLocale__Language = 222
	QLocale__Pahlavi                   QLocale__Language = 223
	QLocale__Palauan                   QLocale__Language = 224
	QLocale__Pali                      QLocale__Language = 225
	QLocale__Papiamento                QLocale__Language = 226
	QLocale__Pashto                    QLocale__Language = 227
	QLocale__Persian                   QLocale__Language = 228
	QLocale__Phoenician                QLocale__Language = 229
	QLocale__Polish                    QLocale__Language = 230
	QLocale__Portuguese                QLocale__Language = 231
	QLocale__Prussian                  QLocale__Language = 232
	QLocale__Punjabi                   QLocale__Language = 233
	QLocale__Quechua                   QLocale__Language = 234
	QLocale__Romanian                  QLocale__Language = 235
	QLocale__Romansh                   QLocale__Language = 236
	QLocale__Rombo                     QLocale__Language = 237
	QLocale__Rundi                     QLocale__Language = 238
	QLocale__Russian                   QLocale__Language = 239
	QLocale__Rwa                       QLocale__Language = 240
	QLocale__Saho                      QLocale__Language = 241
	QLocale__Sakha                     QLocale__Language = 242
	QLocale__Samburu                   QLocale__Language = 243
	QLocale__Samoan                    QLocale__Language = 244
	QLocale__Sango                     QLocale__Language = 245
	QLocale__Sangu                     QLocale__Language = 246
	QLocale__Sanskrit                  QLocale__Language = 247
	QLocale__Santali                   QLocale__Language = 248
	QLocale__Sardinian                 QLocale__Language = 249
	QLocale__Saurashtra                QLocale__Language = 250
	QLocale__Sena                      QLocale__Language = 251
	QLocale__Serbian                   QLocale__Language = 252
	QLocale__Shambala                  QLocale__Language = 253
	QLocale__Shona                     QLocale__Language = 254
	QLocale__SichuanYi                 QLocale__Language = 255
	QLocale__Sicilian                  QLocale__Language = 256
	QLocale__Sidamo                    QLocale__Language = 257
	QLocale__Silesian                  QLocale__Language = 258
	QLocale__Sindhi                    QLocale__Language = 259
	QLocale__Sinhala                   QLocale__Language = 260
	QLocale__SkoltSami                 QLocale__Language = 261
	QLocale__Slovak                    QLocale__Language = 262
	QLocale__Slovenian                 QLocale__Language = 263
	QLocale__Soga                      QLocale__Language = 264
	QLocale__Somali                    QLocale__Language = 265
	QLocale__SouthernKurdish           QLocale__Language = 266
	QLocale__SouthernSami              QLocale__Language = 267
	QLocale__SouthernSotho             QLocale__Language = 268
	QLocale__SouthNdebele              QLocale__Language = 269
	QLocale__Spanish                   QLocale__Language = 270
	QLocale__StandardMoroccanTamazight QLocale__Language = 271
	QLocale__Sundanese                 QLocale__Language = 272
	QLocale__Swahili                   QLocale__Language = 273
	QLocale__Swati                     QLocale__Language = 274
	QLocale__Swedish                   QLocale__Language = 275
	QLocale__SwissGerman               QLocale__Language = 276
	QLocale__Syriac                    QLocale__Language = 277
	QLocale__Tachelhit                 QLocale__Language = 278
	QLocale__Tahitian                  QLocale__Language = 279
	QLocale__TaiDam                    QLocale__Language = 280
	QLocale__Taita                     QLocale__Language = 281
	QLocale__Tajik                     QLocale__Language = 282
	QLocale__Tamil                     QLocale__Language = 283
	QLocale__Taroko                    QLocale__Language = 284
	QLocale__Tasawaq                   QLocale__Language = 285
	QLocale__Tatar                     QLocale__Language = 286
	QLocale__Telugu                    QLocale__Language = 287
	QLocale__Teso                      QLocale__Language = 288
	QLocale__Thai                      QLocale__Language = 289
	QLocale__Tibetan                   QLocale__Language = 290
	QLocale__Tigre                     QLocale__Language = 291
	QLocale__Tigrinya                  QLocale__Language = 292
	QLocale__TokelauLanguage           QLocale__Language = 293
	QLocale__TokPisin                  QLocale__Language = 294
	QLocale__Tongan                    QLocale__Language = 295
	QLocale__Tsonga                    QLocale__Language = 296
	QLocale__Tswana                    QLocale__Language = 297
	QLocale__Turkish                   QLocale__Language = 298
	QLocale__Turkmen                   QLocale__Language = 299
	QLocale__TuvaluLanguage            QLocale__Language = 300
	QLocale__Tyap                      QLocale__Language = 301
	QLocale__Ugaritic                  QLocale__Language = 302
	QLocale__Ukrainian                 QLocale__Language = 303
	QLocale__UpperSorbian              QLocale__Language = 304
	QLocale__Urdu                      QLocale__Language = 305
	QLocale__Uyghur                    QLocale__Language = 306
	QLocale__Uzbek                     QLocale__Language = 307
	QLocale__Vai                       QLocale__Language = 308
	QLocale__Venda                     QLocale__Language = 309
	QLocale__Vietnamese                QLocale__Language = 310
	QLocale__Volapuk                   QLocale__Language = 311
	QLocale__Vunjo                     QLocale__Language = 312
	QLocale__Walloon                   QLocale__Language = 313
	QLocale__Walser                    QLocale__Language = 314
	QLocale__Warlpiri                  QLocale__Language = 315
	QLocale__Welsh                     QLocale__Language = 316
	QLocale__WesternBalochi            QLocale__Language = 317
	QLocale__WesternFrisian            QLocale__Language = 318
	QLocale__Wolaytta                  QLocale__Language = 319
	QLocale__Wolof                     QLocale__Language = 320
	QLocale__Xhosa                     QLocale__Language = 321
	QLocale__Yangben                   QLocale__Language = 322
	QLocale__Yiddish                   QLocale__Language = 323
	QLocale__Yoruba                    QLocale__Language = 324
	QLocale__Zarma                     QLocale__Language = 325
	QLocale__Zhuang                    QLocale__Language = 326
	QLocale__Zulu                      QLocale__Language = 327
	QLocale__Kaingang                  QLocale__Language = 328
	QLocale__Nheengatu                 QLocale__Language = 329
	QLocale__Afan                      QLocale__Language = 220
	QLocale__Bengali                   QLocale__Language = 30
	QLocale__Bhutani                   QLocale__Language = 73
	QLocale__Byelorussian              QLocale__Language = 35
	QLocale__Cambodian                 QLocale__Language = 135
	QLocale__CentralMoroccoTamazight   QLocale__Language = 50
	QLocale__Chewa                     QLocale__Language = 212
	QLocale__Frisian                   QLocale__Language = 318
	QLocale__Greenlandic               QLocale__Language = 127
	QLocale__Inupiak                   QLocale__Language = 117
	QLocale__Kirghiz                   QLocale__Language = 150
	QLocale__Kurundi                   QLocale__Language = 238
	QLocale__Kwanyama                  QLocale__Language = 147
	QLocale__Navaho                    QLocale__Language = 197
	QLocale__Oriya                     QLocale__Language = 215
	QLocale__RhaetoRomance             QLocale__Language = 236
	QLocale__Uighur                    QLocale__Language = 306
	QLocale__Uigur                     QLocale__Language = 306
	QLocale__Walamo                    QLocale__Language = 319
	QLocale__LastLanguage              QLocale__Language = 329
)

type QLocale__Script uint16

const (
	QLocale__AnyScript                   QLocale__Script = 0
	QLocale__AdlamScript                 QLocale__Script = 1
	QLocale__AhomScript                  QLocale__Script = 2
	QLocale__AnatolianHieroglyphsScript  QLocale__Script = 3
	QLocale__ArabicScript                QLocale__Script = 4
	QLocale__ArmenianScript              QLocale__Script = 5
	QLocale__AvestanScript               QLocale__Script = 6
	QLocale__BalineseScript              QLocale__Script = 7
	QLocale__BamumScript                 QLocale__Script = 8
	QLocale__BanglaScript                QLocale__Script = 9
	QLocale__BassaVahScript              QLocale__Script = 10
	QLocale__BatakScript                 QLocale__Script = 11
	QLocale__BhaiksukiScript             QLocale__Script = 12
	QLocale__BopomofoScript              QLocale__Script = 13
	QLocale__BrahmiScript                QLocale__Script = 14
	QLocale__BrailleScript               QLocale__Script = 15
	QLocale__BugineseScript              QLocale__Script = 16
	QLocale__BuhidScript                 QLocale__Script = 17
	QLocale__CanadianAboriginalScript    QLocale__Script = 18
	QLocale__CarianScript                QLocale__Script = 19
	QLocale__CaucasianAlbanianScript     QLocale__Script = 20
	QLocale__ChakmaScript                QLocale__Script = 21
	QLocale__ChamScript                  QLocale__Script = 22
	QLocale__CherokeeScript              QLocale__Script = 23
	QLocale__CopticScript                QLocale__Script = 24
	QLocale__CuneiformScript             QLocale__Script = 25
	QLocale__CypriotScript               QLocale__Script = 26
	QLocale__CyrillicScript              QLocale__Script = 27
	QLocale__DeseretScript               QLocale__Script = 28
	QLocale__DevanagariScript            QLocale__Script = 29
	QLocale__DuployanScript              QLocale__Script = 30
	QLocale__EgyptianHieroglyphsScript   QLocale__Script = 31
	QLocale__ElbasanScript               QLocale__Script = 32
	QLocale__EthiopicScript              QLocale__Script = 33
	QLocale__FraserScript                QLocale__Script = 34
	QLocale__GeorgianScript              QLocale__Script = 35
	QLocale__GlagoliticScript            QLocale__Script = 36
	QLocale__GothicScript                QLocale__Script = 37
	QLocale__GranthaScript               QLocale__Script = 38
	QLocale__GreekScript                 QLocale__Script = 39
	QLocale__GujaratiScript              QLocale__Script = 40
	QLocale__GurmukhiScript              QLocale__Script = 41
	QLocale__HangulScript                QLocale__Script = 42
	QLocale__HanScript                   QLocale__Script = 43
	QLocale__HanunooScript               QLocale__Script = 44
	QLocale__HanWithBopomofoScript       QLocale__Script = 45
	QLocale__HatranScript                QLocale__Script = 46
	QLocale__HebrewScript                QLocale__Script = 47
	QLocale__HiraganaScript              QLocale__Script = 48
	QLocale__ImperialAramaicScript       QLocale__Script = 49
	QLocale__InscriptionalPahlaviScript  QLocale__Script = 50
	QLocale__InscriptionalParthianScript QLocale__Script = 51
	QLocale__JamoScript                  QLocale__Script = 52
	QLocale__JapaneseScript              QLocale__Script = 53
	QLocale__JavaneseScript              QLocale__Script = 54
	QLocale__KaithiScript                QLocale__Script = 55
	QLocale__KannadaScript               QLocale__Script = 56
	QLocale__KatakanaScript              QLocale__Script = 57
	QLocale__KayahLiScript               QLocale__Script = 58
	QLocale__KharoshthiScript            QLocale__Script = 59
	QLocale__KhmerScript                 QLocale__Script = 60
	QLocale__KhojkiScript                QLocale__Script = 61
	QLocale__KhudawadiScript             QLocale__Script = 62
	QLocale__KoreanScript                QLocale__Script = 63
	QLocale__LannaScript                 QLocale__Script = 64
	QLocale__LaoScript                   QLocale__Script = 65
	QLocale__LatinScript                 QLocale__Script = 66
	QLocale__LepchaScript                QLocale__Script = 67
	QLocale__LimbuScript                 QLocale__Script = 68
	QLocale__LinearAScript               QLocale__Script = 69
	QLocale__LinearBScript               QLocale__Script = 70
	QLocale__LycianScript                QLocale__Script = 71
	QLocale__LydianScript                QLocale__Script = 72
	QLocale__MahajaniScript              QLocale__Script = 73
	QLocale__MalayalamScript             QLocale__Script = 74
	QLocale__MandaeanScript              QLocale__Script = 75
	QLocale__ManichaeanScript            QLocale__Script = 76
	QLocale__MarchenScript               QLocale__Script = 77
	QLocale__MeiteiMayekScript           QLocale__Script = 78
	QLocale__MendeScript                 QLocale__Script = 79
	QLocale__MeroiticCursiveScript       QLocale__Script = 80
	QLocale__MeroiticScript              QLocale__Script = 81
	QLocale__ModiScript                  QLocale__Script = 82
	QLocale__MongolianScript             QLocale__Script = 83
	QLocale__MroScript                   QLocale__Script = 84
	QLocale__MultaniScript               QLocale__Script = 85
	QLocale__MyanmarScript               QLocale__Script = 86
	QLocale__NabataeanScript             QLocale__Script = 87
	QLocale__NewaScript                  QLocale__Script = 88
	QLocale__NewTaiLueScript             QLocale__Script = 89
	QLocale__NkoScript                   QLocale__Script = 90
	QLocale__OdiaScript                  QLocale__Script = 91
	QLocale__OghamScript                 QLocale__Script = 92
	QLocale__OlChikiScript               QLocale__Script = 93
	QLocale__OldHungarianScript          QLocale__Script = 94
	QLocale__OldItalicScript             QLocale__Script = 95
	QLocale__OldNorthArabianScript       QLocale__Script = 96
	QLocale__OldPermicScript             QLocale__Script = 97
	QLocale__OldPersianScript            QLocale__Script = 98
	QLocale__OldSouthArabianScript       QLocale__Script = 99
	QLocale__OrkhonScript                QLocale__Script = 100
	QLocale__OsageScript                 QLocale__Script = 101
	QLocale__OsmanyaScript               QLocale__Script = 102
	QLocale__PahawhHmongScript           QLocale__Script = 103
	QLocale__PalmyreneScript             QLocale__Script = 104
	QLocale__PauCinHauScript             QLocale__Script = 105
	QLocale__PhagsPaScript               QLocale__Script = 106
	QLocale__PhoenicianScript            QLocale__Script = 107
	QLocale__PollardPhoneticScript       QLocale__Script = 108
	QLocale__PsalterPahlaviScript        QLocale__Script = 109
	QLocale__RejangScript                QLocale__Script = 110
	QLocale__RunicScript                 QLocale__Script = 111
	QLocale__SamaritanScript             QLocale__Script = 112
	QLocale__SaurashtraScript            QLocale__Script = 113
	QLocale__SharadaScript               QLocale__Script = 114
	QLocale__ShavianScript               QLocale__Script = 115
	QLocale__SiddhamScript               QLocale__Script = 116
	QLocale__SignWritingScript           QLocale__Script = 117
	QLocale__SimplifiedHanScript         QLocale__Script = 118
	QLocale__SinhalaScript               QLocale__Script = 119
	QLocale__SoraSompengScript           QLocale__Script = 120
	QLocale__SundaneseScript             QLocale__Script = 121
	QLocale__SylotiNagriScript           QLocale__Script = 122
	QLocale__SyriacScript                QLocale__Script = 123
	QLocale__TagalogScript               QLocale__Script = 124
	QLocale__TagbanwaScript              QLocale__Script = 125
	QLocale__TaiLeScript                 QLocale__Script = 126
	QLocale__TaiVietScript               QLocale__Script = 127
	QLocale__TakriScript                 QLocale__Script = 128
	QLocale__TamilScript                 QLocale__Script = 129
	QLocale__TangutScript                QLocale__Script = 130
	QLocale__TeluguScript                QLocale__Script = 131
	QLocale__ThaanaScript                QLocale__Script = 132
	QLocale__ThaiScript                  QLocale__Script = 133
	QLocale__TibetanScript               QLocale__Script = 134
	QLocale__TifinaghScript              QLocale__Script = 135
	QLocale__TirhutaScript               QLocale__Script = 136
	QLocale__TraditionalHanScript        QLocale__Script = 137
	QLocale__UgariticScript              QLocale__Script = 138
	QLocale__VaiScript                   QLocale__Script = 139
	QLocale__VarangKshitiScript          QLocale__Script = 140
	QLocale__YiScript                    QLocale__Script = 141
	QLocale__BengaliScript               QLocale__Script = 9
	QLocale__MendeKikakuiScript          QLocale__Script = 79
	QLocale__OriyaScript                 QLocale__Script = 91
	QLocale__SimplifiedChineseScript     QLocale__Script = 118
	QLocale__TraditionalChineseScript    QLocale__Script = 137
	QLocale__LastScript                  QLocale__Script = 141
)

type QLocale__Country uint16

const (
	QLocale__AnyTerritory                           QLocale__Country = 0
	QLocale__Afghanistan                            QLocale__Country = 1
	QLocale__AlandIslands                           QLocale__Country = 2
	QLocale__Albania                                QLocale__Country = 3
	QLocale__Algeria                                QLocale__Country = 4
	QLocale__AmericanSamoa                          QLocale__Country = 5
	QLocale__Andorra                                QLocale__Country = 6
	QLocale__Angola                                 QLocale__Country = 7
	QLocale__Anguilla                               QLocale__Country = 8
	QLocale__Antarctica                             QLocale__Country = 9
	QLocale__AntiguaAndBarbuda                      QLocale__Country = 10
	QLocale__Argentina                              QLocale__Country = 11
	QLocale__Armenia                                QLocale__Country = 12
	QLocale__Aruba                                  QLocale__Country = 13
	QLocale__AscensionIsland                        QLocale__Country = 14
	QLocale__Australia                              QLocale__Country = 15
	QLocale__Austria                                QLocale__Country = 16
	QLocale__Azerbaijan                             QLocale__Country = 17
	QLocale__Bahamas                                QLocale__Country = 18
	QLocale__Bahrain                                QLocale__Country = 19
	QLocale__Bangladesh                             QLocale__Country = 20
	QLocale__Barbados                               QLocale__Country = 21
	QLocale__Belarus                                QLocale__Country = 22
	QLocale__Belgium                                QLocale__Country = 23
	QLocale__Belize                                 QLocale__Country = 24
	QLocale__Benin                                  QLocale__Country = 25
	QLocale__Bermuda                                QLocale__Country = 26
	QLocale__Bhutan                                 QLocale__Country = 27
	QLocale__Bolivia                                QLocale__Country = 28
	QLocale__BosniaAndHerzegovina                   QLocale__Country = 29
	QLocale__Botswana                               QLocale__Country = 30
	QLocale__BouvetIsland                           QLocale__Country = 31
	QLocale__Brazil                                 QLocale__Country = 32
	QLocale__BritishIndianOceanTerritory            QLocale__Country = 33
	QLocale__BritishVirginIslands                   QLocale__Country = 34
	QLocale__Brunei                                 QLocale__Country = 35
	QLocale__Bulgaria                               QLocale__Country = 36
	QLocale__BurkinaFaso                            QLocale__Country = 37
	QLocale__Burundi                                QLocale__Country = 38
	QLocale__Cambodia                               QLocale__Country = 39
	QLocale__Cameroon                               QLocale__Country = 40
	QLocale__Canada                                 QLocale__Country = 41
	QLocale__CanaryIslands                          QLocale__Country = 42
	QLocale__CapeVerde                              QLocale__Country = 43
	QLocale__CaribbeanNetherlands                   QLocale__Country = 44
	QLocale__CaymanIslands                          QLocale__Country = 45
	QLocale__CentralAfricanRepublic                 QLocale__Country = 46
	QLocale__CeutaAndMelilla                        QLocale__Country = 47
	QLocale__Chad                                   QLocale__Country = 48
	QLocale__Chile                                  QLocale__Country = 49
	QLocale__China                                  QLocale__Country = 50
	QLocale__ChristmasIsland                        QLocale__Country = 51
	QLocale__ClippertonIsland                       QLocale__Country = 52
	QLocale__CocosIslands                           QLocale__Country = 53
	QLocale__Colombia                               QLocale__Country = 54
	QLocale__Comoros                                QLocale__Country = 55
	QLocale__CongoBrazzaville                       QLocale__Country = 56
	QLocale__CongoKinshasa                          QLocale__Country = 57
	QLocale__CookIslands                            QLocale__Country = 58
	QLocale__CostaRica                              QLocale__Country = 59
	QLocale__Croatia                                QLocale__Country = 60
	QLocale__Cuba                                   QLocale__Country = 61
	QLocale__Curacao                                QLocale__Country = 62
	QLocale__Cyprus                                 QLocale__Country = 63
	QLocale__Czechia                                QLocale__Country = 64
	QLocale__Denmark                                QLocale__Country = 65
	QLocale__DiegoGarcia                            QLocale__Country = 66
	QLocale__Djibouti                               QLocale__Country = 67
	QLocale__Dominica                               QLocale__Country = 68
	QLocale__DominicanRepublic                      QLocale__Country = 69
	QLocale__Ecuador                                QLocale__Country = 70
	QLocale__Egypt                                  QLocale__Country = 71
	QLocale__ElSalvador                             QLocale__Country = 72
	QLocale__EquatorialGuinea                       QLocale__Country = 73
	QLocale__Eritrea                                QLocale__Country = 74
	QLocale__Estonia                                QLocale__Country = 75
	QLocale__Eswatini                               QLocale__Country = 76
	QLocale__Ethiopia                               QLocale__Country = 77
	QLocale__Europe                                 QLocale__Country = 78
	QLocale__EuropeanUnion                          QLocale__Country = 79
	QLocale__FalklandIslands                        QLocale__Country = 80
	QLocale__FaroeIslands                           QLocale__Country = 81
	QLocale__Fiji                                   QLocale__Country = 82
	QLocale__Finland                                QLocale__Country = 83
	QLocale__France                                 QLocale__Country = 84
	QLocale__FrenchGuiana                           QLocale__Country = 85
	QLocale__FrenchPolynesia                        QLocale__Country = 86
	QLocale__FrenchSouthernTerritories              QLocale__Country = 87
	QLocale__Gabon                                  QLocale__Country = 88
	QLocale__Gambia                                 QLocale__Country = 89
	QLocale__Georgia                                QLocale__Country = 90
	QLocale__Germany                                QLocale__Country = 91
	QLocale__Ghana                                  QLocale__Country = 92
	QLocale__Gibraltar                              QLocale__Country = 93
	QLocale__Greece                                 QLocale__Country = 94
	QLocale__Greenland                              QLocale__Country = 95
	QLocale__Grenada                                QLocale__Country = 96
	QLocale__Guadeloupe                             QLocale__Country = 97
	QLocale__Guam                                   QLocale__Country = 98
	QLocale__Guatemala                              QLocale__Country = 99
	QLocale__Guernsey                               QLocale__Country = 100
	QLocale__GuineaBissau                           QLocale__Country = 101
	QLocale__Guinea                                 QLocale__Country = 102
	QLocale__Guyana                                 QLocale__Country = 103
	QLocale__Haiti                                  QLocale__Country = 104
	QLocale__HeardAndMcDonaldIslands                QLocale__Country = 105
	QLocale__Honduras                               QLocale__Country = 106
	QLocale__HongKong                               QLocale__Country = 107
	QLocale__Hungary                                QLocale__Country = 108
	QLocale__Iceland                                QLocale__Country = 109
	QLocale__India                                  QLocale__Country = 110
	QLocale__Indonesia                              QLocale__Country = 111
	QLocale__Iran                                   QLocale__Country = 112
	QLocale__Iraq                                   QLocale__Country = 113
	QLocale__Ireland                                QLocale__Country = 114
	QLocale__IsleOfMan                              QLocale__Country = 115
	QLocale__Israel                                 QLocale__Country = 116
	QLocale__Italy                                  QLocale__Country = 117
	QLocale__IvoryCoast                             QLocale__Country = 118
	QLocale__Jamaica                                QLocale__Country = 119
	QLocale__Japan                                  QLocale__Country = 120
	QLocale__Jersey                                 QLocale__Country = 121
	QLocale__Jordan                                 QLocale__Country = 122
	QLocale__Kazakhstan                             QLocale__Country = 123
	QLocale__Kenya                                  QLocale__Country = 124
	QLocale__Kiribati                               QLocale__Country = 125
	QLocale__Kosovo                                 QLocale__Country = 126
	QLocale__Kuwait                                 QLocale__Country = 127
	QLocale__Kyrgyzstan                             QLocale__Country = 128
	QLocale__Laos                                   QLocale__Country = 129
	QLocale__LatinAmerica                           QLocale__Country = 130
	QLocale__Latvia                                 QLocale__Country = 131
	QLocale__Lebanon                                QLocale__Country = 132
	QLocale__Lesotho                                QLocale__Country = 133
	QLocale__Liberia                                QLocale__Country = 134
	QLocale__Libya                                  QLocale__Country = 135
	QLocale__Liechtenstein                          QLocale__Country = 136
	QLocale__Lithuania                              QLocale__Country = 137
	QLocale__Luxembourg                             QLocale__Country = 138
	QLocale__Macao                                  QLocale__Country = 139
	QLocale__Macedonia                              QLocale__Country = 140
	QLocale__Madagascar                             QLocale__Country = 141
	QLocale__Malawi                                 QLocale__Country = 142
	QLocale__Malaysia                               QLocale__Country = 143
	QLocale__Maldives                               QLocale__Country = 144
	QLocale__Mali                                   QLocale__Country = 145
	QLocale__Malta                                  QLocale__Country = 146
	QLocale__MarshallIslands                        QLocale__Country = 147
	QLocale__Martinique                             QLocale__Country = 148
	QLocale__Mauritania                             QLocale__Country = 149
	QLocale__Mauritius                              QLocale__Country = 150
	QLocale__Mayotte                                QLocale__Country = 151
	QLocale__Mexico                                 QLocale__Country = 152
	QLocale__Micronesia                             QLocale__Country = 153
	QLocale__Moldova                                QLocale__Country = 154
	QLocale__Monaco                                 QLocale__Country = 155
	QLocale__Mongolia                               QLocale__Country = 156
	QLocale__Montenegro                             QLocale__Country = 157
	QLocale__Montserrat                             QLocale__Country = 158
	QLocale__Morocco                                QLocale__Country = 159
	QLocale__Mozambique                             QLocale__Country = 160
	QLocale__Myanmar                                QLocale__Country = 161
	QLocale__Namibia                                QLocale__Country = 162
	QLocale__NauruTerritory                         QLocale__Country = 163
	QLocale__Nepal                                  QLocale__Country = 164
	QLocale__Netherlands                            QLocale__Country = 165
	QLocale__NewCaledonia                           QLocale__Country = 166
	QLocale__NewZealand                             QLocale__Country = 167
	QLocale__Nicaragua                              QLocale__Country = 168
	QLocale__Nigeria                                QLocale__Country = 169
	QLocale__Niger                                  QLocale__Country = 170
	QLocale__Niue                                   QLocale__Country = 171
	QLocale__NorfolkIsland                          QLocale__Country = 172
	QLocale__NorthernMarianaIslands                 QLocale__Country = 173
	QLocale__NorthKorea                             QLocale__Country = 174
	QLocale__Norway                                 QLocale__Country = 175
	QLocale__Oman                                   QLocale__Country = 176
	QLocale__OutlyingOceania                        QLocale__Country = 177
	QLocale__Pakistan                               QLocale__Country = 178
	QLocale__Palau                                  QLocale__Country = 179
	QLocale__PalestinianTerritories                 QLocale__Country = 180
	QLocale__Panama                                 QLocale__Country = 181
	QLocale__PapuaNewGuinea                         QLocale__Country = 182
	QLocale__Paraguay                               QLocale__Country = 183
	QLocale__Peru                                   QLocale__Country = 184
	QLocale__Philippines                            QLocale__Country = 185
	QLocale__Pitcairn                               QLocale__Country = 186
	QLocale__Poland                                 QLocale__Country = 187
	QLocale__Portugal                               QLocale__Country = 188
	QLocale__PuertoRico                             QLocale__Country = 189
	QLocale__Qatar                                  QLocale__Country = 190
	QLocale__Reunion                                QLocale__Country = 191
	QLocale__Romania                                QLocale__Country = 192
	QLocale__Russia                                 QLocale__Country = 193
	QLocale__Rwanda                                 QLocale__Country = 194
	QLocale__SaintBarthelemy                        QLocale__Country = 195
	QLocale__SaintHelena                            QLocale__Country = 196
	QLocale__SaintKittsAndNevis                     QLocale__Country = 197
	QLocale__SaintLucia                             QLocale__Country = 198
	QLocale__SaintMartin                            QLocale__Country = 199
	QLocale__SaintPierreAndMiquelon                 QLocale__Country = 200
	QLocale__SaintVincentAndGrenadines              QLocale__Country = 201
	QLocale__Samoa                                  QLocale__Country = 202
	QLocale__SanMarino                              QLocale__Country = 203
	QLocale__SaoTomeAndPrincipe                     QLocale__Country = 204
	QLocale__SaudiArabia                            QLocale__Country = 205
	QLocale__Senegal                                QLocale__Country = 206
	QLocale__Serbia                                 QLocale__Country = 207
	QLocale__Seychelles                             QLocale__Country = 208
	QLocale__SierraLeone                            QLocale__Country = 209
	QLocale__Singapore                              QLocale__Country = 210
	QLocale__SintMaarten                            QLocale__Country = 211
	QLocale__Slovakia                               QLocale__Country = 212
	QLocale__Slovenia                               QLocale__Country = 213
	QLocale__SolomonIslands                         QLocale__Country = 214
	QLocale__Somalia                                QLocale__Country = 215
	QLocale__SouthAfrica                            QLocale__Country = 216
	QLocale__SouthGeorgiaAndSouthSandwichIslands    QLocale__Country = 217
	QLocale__SouthKorea                             QLocale__Country = 218
	QLocale__SouthSudan                             QLocale__Country = 219
	QLocale__Spain                                  QLocale__Country = 220
	QLocale__SriLanka                               QLocale__Country = 221
	QLocale__Sudan                                  QLocale__Country = 222
	QLocale__Suriname                               QLocale__Country = 223
	QLocale__SvalbardAndJanMayen                    QLocale__Country = 224
	QLocale__Sweden                                 QLocale__Country = 225
	QLocale__Switzerland                            QLocale__Country = 226
	QLocale__Syria                                  QLocale__Country = 227
	QLocale__Taiwan                                 QLocale__Country = 228
	QLocale__Tajikistan                             QLocale__Country = 229
	QLocale__Tanzania                               QLocale__Country = 230
	QLocale__Thailand                               QLocale__Country = 231
	QLocale__TimorLeste                             QLocale__Country = 232
	QLocale__Togo                                   QLocale__Country = 233
	QLocale__TokelauTerritory                       QLocale__Country = 234
	QLocale__Tonga                                  QLocale__Country = 235
	QLocale__TrinidadAndTobago                      QLocale__Country = 236
	QLocale__TristanDaCunha                         QLocale__Country = 237
	QLocale__Tunisia                                QLocale__Country = 238
	QLocale__Turkey                                 QLocale__Country = 239
	QLocale__Turkmenistan                           QLocale__Country = 240
	QLocale__TurksAndCaicosIslands                  QLocale__Country = 241
	QLocale__TuvaluTerritory                        QLocale__Country = 242
	QLocale__Uganda                                 QLocale__Country = 243
	QLocale__Ukraine                                QLocale__Country = 244
	QLocale__UnitedArabEmirates                     QLocale__Country = 245
	QLocale__UnitedKingdom                          QLocale__Country = 246
	QLocale__UnitedStatesOutlyingIslands            QLocale__Country = 247
	QLocale__UnitedStates                           QLocale__Country = 248
	QLocale__UnitedStatesVirginIslands              QLocale__Country = 249
	QLocale__Uruguay                                QLocale__Country = 250
	QLocale__Uzbekistan                             QLocale__Country = 251
	QLocale__Vanuatu                                QLocale__Country = 252
	QLocale__VaticanCity                            QLocale__Country = 253
	QLocale__Venezuela                              QLocale__Country = 254
	QLocale__Vietnam                                QLocale__Country = 255
	QLocale__WallisAndFutuna                        QLocale__Country = 256
	QLocale__WesternSahara                          QLocale__Country = 257
	QLocale__World                                  QLocale__Country = 258
	QLocale__Yemen                                  QLocale__Country = 259
	QLocale__Zambia                                 QLocale__Country = 260
	QLocale__Zimbabwe                               QLocale__Country = 261
	QLocale__AnyCountry                             QLocale__Country = 0
	QLocale__Bonaire                                QLocale__Country = 44
	QLocale__BosniaAndHerzegowina                   QLocale__Country = 29
	QLocale__CuraSao                                QLocale__Country = 62
	QLocale__CzechRepublic                          QLocale__Country = 64
	QLocale__DemocraticRepublicOfCongo              QLocale__Country = 57
	QLocale__DemocraticRepublicOfKorea              QLocale__Country = 174
	QLocale__EastTimor                              QLocale__Country = 232
	QLocale__LatinAmericaAndTheCaribbean            QLocale__Country = 130
	QLocale__Macau                                  QLocale__Country = 139
	QLocale__NauruCountry                           QLocale__Country = 163
	QLocale__PeoplesRepublicOfCongo                 QLocale__Country = 56
	QLocale__RepublicOfKorea                        QLocale__Country = 218
	QLocale__RussianFederation                      QLocale__Country = 193
	QLocale__SaintVincentAndTheGrenadines           QLocale__Country = 201
	QLocale__SouthGeorgiaAndTheSouthSandwichIslands QLocale__Country = 217
	QLocale__SvalbardAndJanMayenIslands             QLocale__Country = 224
	QLocale__Swaziland                              QLocale__Country = 76
	QLocale__SyrianArabRepublic                     QLocale__Country = 227
	QLocale__TokelauCountry                         QLocale__Country = 234
	QLocale__TuvaluCountry                          QLocale__Country = 242
	QLocale__UnitedStatesMinorOutlyingIslands       QLocale__Country = 247
	QLocale__VaticanCityState                       QLocale__Country = 253
	QLocale__WallisAndFutunaIslands                 QLocale__Country = 256
	QLocale__LastTerritory                          QLocale__Country = 261
	QLocale__LastCountry                            QLocale__Country = 261
)

type QLocale__MeasurementSystem int

const (
	QLocale__MetricSystem     QLocale__MeasurementSystem = 0
	QLocale__ImperialUSSystem QLocale__MeasurementSystem = 1
	QLocale__ImperialUKSystem QLocale__MeasurementSystem = 2
	QLocale__ImperialSystem   QLocale__MeasurementSystem = 1
)

type QLocale__FormatType int

const (
	QLocale__LongFormat   QLocale__FormatType = 0
	QLocale__ShortFormat  QLocale__FormatType = 1
	QLocale__NarrowFormat QLocale__FormatType = 2
)

type QLocale__NumberOption int

const (
	QLocale__DefaultNumberOptions          QLocale__NumberOption = 0
	QLocale__OmitGroupSeparator            QLocale__NumberOption = 1
	QLocale__RejectGroupSeparator          QLocale__NumberOption = 2
	QLocale__OmitLeadingZeroInExponent     QLocale__NumberOption = 4
	QLocale__RejectLeadingZeroInExponent   QLocale__NumberOption = 8
	QLocale__IncludeTrailingZeroesAfterDot QLocale__NumberOption = 16
	QLocale__RejectTrailingZeroesAfterDot  QLocale__NumberOption = 32
)

type QLocale__FloatingPointPrecisionOption int

const (
	QLocale__FloatingPointShortest QLocale__FloatingPointPrecisionOption = -128
)

type QLocale__CurrencySymbolFormat int

const (
	QLocale__CurrencyIsoCode     QLocale__CurrencySymbolFormat = 0
	QLocale__CurrencySymbol      QLocale__CurrencySymbolFormat = 1
	QLocale__CurrencyDisplayName QLocale__CurrencySymbolFormat = 2
)

type QLocale__DataSizeFormat int

const (
	QLocale__DataSizeBase1000          QLocale__DataSizeFormat = 1
	QLocale__DataSizeSIQuantifiers     QLocale__DataSizeFormat = 2
	QLocale__DataSizeIecFormat         QLocale__DataSizeFormat = 0
	QLocale__DataSizeTraditionalFormat QLocale__DataSizeFormat = 2
	QLocale__DataSizeSIFormat          QLocale__DataSizeFormat = 3
)

type QLocale__LanguageCodeType int

const (
	QLocale__ISO639Part1        QLocale__LanguageCodeType = 1
	QLocale__ISO639Part2B       QLocale__LanguageCodeType = 2
	QLocale__ISO639Part2T       QLocale__LanguageCodeType = 4
	QLocale__ISO639Part3        QLocale__LanguageCodeType = 8
	QLocale__LegacyLanguageCode QLocale__LanguageCodeType = 32768
	QLocale__ISO639Part2        QLocale__LanguageCodeType = 6
	QLocale__ISO639Alpha2       QLocale__LanguageCodeType = 1
	QLocale__ISO639Alpha3       QLocale__LanguageCodeType = 14
	QLocale__ISO639             QLocale__LanguageCodeType = 15
	QLocale__AnyLanguageCode    QLocale__LanguageCodeType = -1
)

type QLocale__QuotationStyle int

const (
	QLocale__StandardQuotation  QLocale__QuotationStyle = 0
	QLocale__AlternateQuotation QLocale__QuotationStyle = 1
)

type QLocale struct {
	h          *C.QLocale
	isSubclass bool
}

func (this *QLocale) cPointer() *C.QLocale {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLocale) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLocale constructs the type using only CGO pointers.
func newQLocale(h *C.QLocale) *QLocale {
	if h == nil {
		return nil
	}
	return &QLocale{h: h}
}

// UnsafeNewQLocale constructs the type using only unsafe pointers.
func UnsafeNewQLocale(h unsafe.Pointer) *QLocale {
	if h == nil {
		return nil
	}

	return &QLocale{h: (*C.QLocale)(h)}
}

// NewQLocale constructs a new QLocale object.
func NewQLocale() *QLocale {
	var outptr_QLocale *C.QLocale = nil

	C.QLocale_new(&outptr_QLocale)
	ret := newQLocale(outptr_QLocale)
	ret.isSubclass = true
	return ret
}

// NewQLocale2 constructs a new QLocale object.
func NewQLocale2(name string) *QLocale {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	var outptr_QLocale *C.QLocale = nil

	C.QLocale_new2(name_ms, &outptr_QLocale)
	ret := newQLocale(outptr_QLocale)
	ret.isSubclass = true
	return ret
}

// NewQLocale3 constructs a new QLocale object.
func NewQLocale3(language QLocale__Language, territory QLocale__Country) *QLocale {
	var outptr_QLocale *C.QLocale = nil

	C.QLocale_new3((C.uint16_t)(language), (C.uint16_t)(territory), &outptr_QLocale)
	ret := newQLocale(outptr_QLocale)
	ret.isSubclass = true
	return ret
}

// NewQLocale4 constructs a new QLocale object.
func NewQLocale4(language QLocale__Language) *QLocale {
	var outptr_QLocale *C.QLocale = nil

	C.QLocale_new4((C.uint16_t)(language), &outptr_QLocale)
	ret := newQLocale(outptr_QLocale)
	ret.isSubclass = true
	return ret
}

// NewQLocale5 constructs a new QLocale object.
func NewQLocale5(other *QLocale) *QLocale {
	var outptr_QLocale *C.QLocale = nil

	C.QLocale_new5(other.cPointer(), &outptr_QLocale)
	ret := newQLocale(outptr_QLocale)
	ret.isSubclass = true
	return ret
}

// NewQLocale6 constructs a new QLocale object.
func NewQLocale6(language QLocale__Language, script QLocale__Script) *QLocale {
	var outptr_QLocale *C.QLocale = nil

	C.QLocale_new6((C.uint16_t)(language), (C.uint16_t)(script), &outptr_QLocale)
	ret := newQLocale(outptr_QLocale)
	ret.isSubclass = true
	return ret
}

// NewQLocale7 constructs a new QLocale object.
func NewQLocale7(language QLocale__Language, script QLocale__Script, territory QLocale__Country) *QLocale {
	var outptr_QLocale *C.QLocale = nil

	C.QLocale_new7((C.uint16_t)(language), (C.uint16_t)(script), (C.uint16_t)(territory), &outptr_QLocale)
	ret := newQLocale(outptr_QLocale)
	ret.isSubclass = true
	return ret
}

func (this *QLocale) OperatorAssign(other *QLocale) {
	C.QLocale_OperatorAssign(this.h, other.cPointer())
}

func (this *QLocale) Swap(other *QLocale) {
	C.QLocale_Swap(this.h, other.cPointer())
}

func (this *QLocale) Language() QLocale__Language {
	return (QLocale__Language)(C.QLocale_Language(this.h))
}

func (this *QLocale) Script() QLocale__Script {
	return (QLocale__Script)(C.QLocale_Script(this.h))
}

func (this *QLocale) Territory() QLocale__Country {
	return (QLocale__Country)(C.QLocale_Territory(this.h))
}

func (this *QLocale) Country() QLocale__Country {
	return (QLocale__Country)(C.QLocale_Country(this.h))
}

func (this *QLocale) Name() string {
	var _ms C.struct_miqt_string = C.QLocale_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) Bcp47Name() string {
	var _ms C.struct_miqt_string = C.QLocale_Bcp47Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) NativeLanguageName() string {
	var _ms C.struct_miqt_string = C.QLocale_NativeLanguageName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) NativeTerritoryName() string {
	var _ms C.struct_miqt_string = C.QLocale_NativeTerritoryName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) NativeCountryName() string {
	var _ms C.struct_miqt_string = C.QLocale_NativeCountryName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToShort(s string) int16 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (int16)(C.QLocale_ToShort(this.h, s_ms))
}

func (this *QLocale) ToUShort(s string) uint16 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (uint16)(C.QLocale_ToUShort(this.h, s_ms))
}

func (this *QLocale) ToInt(s string) int {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (int)(C.QLocale_ToInt(this.h, s_ms))
}

func (this *QLocale) ToUInt(s string) uint {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (uint)(C.QLocale_ToUInt(this.h, s_ms))
}

func (this *QLocale) ToLong(s string) int64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (int64)(C.QLocale_ToLong(this.h, s_ms))
}

func (this *QLocale) ToULong(s string) uint64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (uint64)(C.QLocale_ToULong(this.h, s_ms))
}

func (this *QLocale) ToLongLong(s string) int64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (int64)(C.QLocale_ToLongLong(this.h, s_ms))
}

func (this *QLocale) ToULongLong(s string) uint64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (uint64)(C.QLocale_ToULongLong(this.h, s_ms))
}

func (this *QLocale) ToFloat(s string) float32 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (float32)(C.QLocale_ToFloat(this.h, s_ms))
}

func (this *QLocale) ToDouble(s string) float64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (float64)(C.QLocale_ToDouble(this.h, s_ms))
}

func (this *QLocale) ToString(i int64) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString(this.h, (C.longlong)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithQulonglong(i uint64) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithQulonglong(this.h, (C.ulonglong)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithLong(i int64) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithLong(this.h, (C.long)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithUlong(i uint64) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithUlong(this.h, (C.ulong)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithShort(i int16) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithShort(this.h, (C.int16_t)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithUshort(i uint16) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithUshort(this.h, (C.uint16_t)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithInt(i int) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithInt(this.h, (C.int)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithUint(i uint) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithUint(this.h, (C.uint)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithDouble(f float64) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithDouble(this.h, (C.double)(f))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithFloat(f float32) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithFloat(this.h, (C.float)(f))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString2(date QDate, format string) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToString2(this.h, date.cPointer(), format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString3(time QTime, format string) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToString3(this.h, time.cPointer(), format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString4(dateTime *QDateTime, format string) string {
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToString4(this.h, dateTime.cPointer(), format_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithDate(date QDate) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithDate(this.h, date.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithTime(time QTime) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithTime(this.h, time.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToStringWithDateTime(dateTime *QDateTime) string {
	var _ms C.struct_miqt_string = C.QLocale_ToStringWithDateTime(this.h, dateTime.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString9(date QDate, format QLocale__FormatType, cal QCalendar) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString9(this.h, date.cPointer(), (C.int)(format), cal.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString10(dateTime *QDateTime, format QLocale__FormatType, cal QCalendar) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString10(this.h, dateTime.cPointer(), (C.int)(format), cal.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) DateFormat() string {
	var _ms C.struct_miqt_string = C.QLocale_DateFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) TimeFormat() string {
	var _ms C.struct_miqt_string = C.QLocale_TimeFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) DateTimeFormat() string {
	var _ms C.struct_miqt_string = C.QLocale_DateTimeFormat(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToDate(stringVal string) *QDate {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDate(C.QLocale_ToDate(this.h, stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToTime(stringVal string) *QTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQTime(C.QLocale_ToTime(this.h, stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime(stringVal string) *QDateTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDateTime(C.QLocale_ToDateTime(this.h, stringVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDate2(stringVal string, format string) *QDate {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDate(C.QLocale_ToDate2(this.h, stringVal_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToTime2(stringVal string, format string) *QTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQTime(C.QLocale_ToTime2(this.h, stringVal_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime2(stringVal string, format string) *QDateTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDateTime(C.QLocale_ToDateTime2(this.h, stringVal_ms, format_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDate3(stringVal string, format QLocale__FormatType, cal QCalendar) *QDate {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDate(C.QLocale_ToDate3(this.h, stringVal_ms, (C.int)(format), cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime3(stringVal string, format QLocale__FormatType, cal QCalendar) *QDateTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDateTime(C.QLocale_ToDateTime3(this.h, stringVal_ms, (C.int)(format), cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDate4(stringVal string, format string, cal QCalendar) *QDate {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDate(C.QLocale_ToDate4(this.h, stringVal_ms, format_ms, cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime4(stringVal string, format string, cal QCalendar) *QDateTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	format_ms := C.struct_miqt_string{}
	format_ms.data = C.CString(format)
	format_ms.len = C.size_t(len(format))
	defer C.free(unsafe.Pointer(format_ms.data))
	_goptr := newQDateTime(C.QLocale_ToDateTime4(this.h, stringVal_ms, format_ms, cal.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) DecimalPoint() string {
	var _ms C.struct_miqt_string = C.QLocale_DecimalPoint(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) GroupSeparator() string {
	var _ms C.struct_miqt_string = C.QLocale_GroupSeparator(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) Percent() string {
	var _ms C.struct_miqt_string = C.QLocale_Percent(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ZeroDigit() string {
	var _ms C.struct_miqt_string = C.QLocale_ZeroDigit(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) NegativeSign() string {
	var _ms C.struct_miqt_string = C.QLocale_NegativeSign(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) PositiveSign() string {
	var _ms C.struct_miqt_string = C.QLocale_PositiveSign(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) Exponential() string {
	var _ms C.struct_miqt_string = C.QLocale_Exponential(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) MonthName(param1 int) string {
	var _ms C.struct_miqt_string = C.QLocale_MonthName(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) StandaloneMonthName(param1 int) string {
	var _ms C.struct_miqt_string = C.QLocale_StandaloneMonthName(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) DayName(param1 int) string {
	var _ms C.struct_miqt_string = C.QLocale_DayName(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) StandaloneDayName(param1 int) string {
	var _ms C.struct_miqt_string = C.QLocale_StandaloneDayName(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) FirstDayOfWeek() DayOfWeek {
	return (DayOfWeek)(C.QLocale_FirstDayOfWeek(this.h))
}

func (this *QLocale) Weekdays() []DayOfWeek {
	var _ma C.struct_miqt_array = C.QLocale_Weekdays(this.h)
	_ret := make([]DayOfWeek, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (DayOfWeek)(_outCast[i])
	}
	return _ret
}

func (this *QLocale) AmText() string {
	var _ms C.struct_miqt_string = C.QLocale_AmText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) PmText() string {
	var _ms C.struct_miqt_string = C.QLocale_PmText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) MeasurementSystem() QLocale__MeasurementSystem {
	return (QLocale__MeasurementSystem)(C.QLocale_MeasurementSystem(this.h))
}

func (this *QLocale) Collation() *QLocale {
	_goptr := newQLocale(C.QLocale_Collation(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) TextDirection() LayoutDirection {
	return (LayoutDirection)(C.QLocale_TextDirection(this.h))
}

func (this *QLocale) ToUpper(str string) string {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToUpper(this.h, str_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToLower(str string) string {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToLower(this.h, str_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) CurrencySymbol() string {
	var _ms C.struct_miqt_string = C.QLocale_CurrencySymbol(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString(param1 int64) string {
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString(this.h, (C.longlong)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithQulonglong(param1 uint64) string {
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyStringWithQulonglong(this.h, (C.ulonglong)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithShort(i int16) string {
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyStringWithShort(this.h, (C.int16_t)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithUshort(i uint16) string {
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyStringWithUshort(this.h, (C.uint16_t)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithInt(i int) string {
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyStringWithInt(this.h, (C.int)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithUint(i uint) string {
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyStringWithUint(this.h, (C.uint)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithDouble(param1 float64) string {
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyStringWithDouble(this.h, (C.double)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithFloat(i float32) string {
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyStringWithFloat(this.h, (C.float)(i))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) FormattedDataSize(bytes int64) string {
	var _ms C.struct_miqt_string = C.QLocale_FormattedDataSize(this.h, (C.longlong)(bytes))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) UiLanguages() []string {
	var _ma C.struct_miqt_array = C.QLocale_UiLanguages(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QLocale_LanguageToCode(language QLocale__Language) string {
	var _ms C.struct_miqt_string = C.QLocale_LanguageToCode((C.uint16_t)(language))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_TerritoryToCode(territory QLocale__Country) string {
	var _ms C.struct_miqt_string = C.QLocale_TerritoryToCode((C.uint16_t)(territory))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_CountryToCode(country QLocale__Country) string {
	var _ms C.struct_miqt_string = C.QLocale_CountryToCode((C.uint16_t)(country))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_ScriptToCode(script QLocale__Script) string {
	var _ms C.struct_miqt_string = C.QLocale_ScriptToCode((C.uint16_t)(script))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_LanguageToString(language QLocale__Language) string {
	var _ms C.struct_miqt_string = C.QLocale_LanguageToString((C.uint16_t)(language))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_TerritoryToString(territory QLocale__Country) string {
	var _ms C.struct_miqt_string = C.QLocale_TerritoryToString((C.uint16_t)(territory))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_CountryToString(country QLocale__Country) string {
	var _ms C.struct_miqt_string = C.QLocale_CountryToString((C.uint16_t)(country))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_ScriptToString(script QLocale__Script) string {
	var _ms C.struct_miqt_string = C.QLocale_ScriptToString((C.uint16_t)(script))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_SetDefault(locale *QLocale) {
	C.QLocale_SetDefault(locale.cPointer())
}

func QLocale_C() *QLocale {
	_goptr := newQLocale(C.QLocale_C())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLocale_System() *QLocale {
	_goptr := newQLocale(C.QLocale_System())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLocale_MatchingLocales(language QLocale__Language, script QLocale__Script, territory QLocale__Country) []QLocale {
	var _ma C.struct_miqt_array = C.QLocale_MatchingLocales((C.uint16_t)(language), (C.uint16_t)(script), (C.uint16_t)(territory))
	_ret := make([]QLocale, int(_ma.len))
	_outCast := (*[0xffff]*C.QLocale)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQLocale(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QLocale_CountriesForLanguage(lang QLocale__Language) []QLocale__Country {
	var _ma C.struct_miqt_array = C.QLocale_CountriesForLanguage((C.uint16_t)(lang))
	_ret := make([]QLocale__Country, int(_ma.len))
	_outCast := (*[0xffff]C.uint16_t)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QLocale__Country)(_outCast[i])
	}
	return _ret
}

func (this *QLocale) SetNumberOptions(options QLocale__NumberOption) {
	C.QLocale_SetNumberOptions(this.h, (C.int)(options))
}

func (this *QLocale) NumberOptions() QLocale__NumberOption {
	return (QLocale__NumberOption)(C.QLocale_NumberOptions(this.h))
}

func (this *QLocale) QuoteString(str string) string {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_QuoteString(this.h, str_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) CreateSeparatedList(strl []string) string {
	strl_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(strl))))
	defer C.free(unsafe.Pointer(strl_CArray))
	for i := range strl {
		strl_i_ms := C.struct_miqt_string{}
		strl_i_ms.data = C.CString(strl[i])
		strl_i_ms.len = C.size_t(len(strl[i]))
		defer C.free(unsafe.Pointer(strl_i_ms.data))
		strl_CArray[i] = strl_i_ms
	}
	strl_ma := C.struct_miqt_array{len: C.size_t(len(strl)), data: unsafe.Pointer(strl_CArray)}
	var _ms C.struct_miqt_string = C.QLocale_CreateSeparatedList(this.h, strl_ma)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToShort2(s string, ok *bool) int16 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (int16)(C.QLocale_ToShort2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToUShort2(s string, ok *bool) uint16 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (uint16)(C.QLocale_ToUShort2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToInt2(s string, ok *bool) int {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (int)(C.QLocale_ToInt2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToUInt2(s string, ok *bool) uint {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (uint)(C.QLocale_ToUInt2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToLong2(s string, ok *bool) int64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (int64)(C.QLocale_ToLong2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToULong2(s string, ok *bool) uint64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (uint64)(C.QLocale_ToULong2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToLongLong2(s string, ok *bool) int64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (int64)(C.QLocale_ToLongLong2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToULongLong2(s string, ok *bool) uint64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (uint64)(C.QLocale_ToULongLong2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToFloat2(s string, ok *bool) float32 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (float32)(C.QLocale_ToFloat2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToDouble2(s string, ok *bool) float64 {
	s_ms := C.struct_miqt_string{}
	s_ms.data = C.CString(s)
	s_ms.len = C.size_t(len(s))
	defer C.free(unsafe.Pointer(s_ms.data))
	return (float64)(C.QLocale_ToDouble2(this.h, s_ms, (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToString22(f float64, format int8) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString22(this.h, (C.double)(f), (C.char)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString32(f float64, format int8, precision int) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString32(this.h, (C.double)(f), (C.char)(format), (C.int)(precision))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString23(f float32, format int8) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString23(this.h, (C.float)(f), (C.char)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString33(f float32, format int8, precision int) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString33(this.h, (C.float)(f), (C.char)(format), (C.int)(precision))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString24(date QDate, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString24(this.h, date.cPointer(), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString25(time QTime, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString25(this.h, time.cPointer(), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToString26(dateTime *QDateTime, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_ToString26(this.h, dateTime.cPointer(), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) DateFormat1(format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_DateFormat1(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) TimeFormat1(format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_TimeFormat1(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) DateTimeFormat1(format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_DateTimeFormat1(this.h, (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToDate22(stringVal string, param2 QLocale__FormatType) *QDate {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDate(C.QLocale_ToDate22(this.h, stringVal_ms, (C.int)(param2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToTime22(stringVal string, param2 QLocale__FormatType) *QTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQTime(C.QLocale_ToTime22(this.h, stringVal_ms, (C.int)(param2)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime22(stringVal string, format QLocale__FormatType) *QDateTime {
	stringVal_ms := C.struct_miqt_string{}
	stringVal_ms.data = C.CString(stringVal)
	stringVal_ms.len = C.size_t(len(stringVal))
	defer C.free(unsafe.Pointer(stringVal_ms.data))
	_goptr := newQDateTime(C.QLocale_ToDateTime22(this.h, stringVal_ms, (C.int)(format)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) MonthName2(param1 int, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_MonthName2(this.h, (C.int)(param1), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) StandaloneMonthName2(param1 int, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_StandaloneMonthName2(this.h, (C.int)(param1), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) DayName2(param1 int, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_DayName2(this.h, (C.int)(param1), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) StandaloneDayName2(param1 int, format QLocale__FormatType) string {
	var _ms C.struct_miqt_string = C.QLocale_StandaloneDayName2(this.h, (C.int)(param1), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) CurrencySymbol1(param1 QLocale__CurrencySymbolFormat) string {
	var _ms C.struct_miqt_string = C.QLocale_CurrencySymbol1(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString2(param1 int64, symbol string) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString2(this.h, (C.longlong)(param1), symbol_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString22(param1 uint64, symbol string) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString22(this.h, (C.ulonglong)(param1), symbol_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString23(i int16, symbol string) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString23(this.h, (C.int16_t)(i), symbol_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString24(i uint16, symbol string) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString24(this.h, (C.uint16_t)(i), symbol_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString25(i int, symbol string) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString25(this.h, (C.int)(i), symbol_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString26(i uint, symbol string) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString26(this.h, (C.uint)(i), symbol_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString27(param1 float64, symbol string) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString27(this.h, (C.double)(param1), symbol_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString3(param1 float64, symbol string, precision int) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString3(this.h, (C.double)(param1), symbol_ms, (C.int)(precision))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString28(i float32, symbol string) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString28(this.h, (C.float)(i), symbol_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) ToCurrencyString32(i float32, symbol string, precision int) string {
	symbol_ms := C.struct_miqt_string{}
	symbol_ms.data = C.CString(symbol)
	symbol_ms.len = C.size_t(len(symbol))
	defer C.free(unsafe.Pointer(symbol_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_ToCurrencyString32(this.h, (C.float)(i), symbol_ms, (C.int)(precision))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) FormattedDataSize2(bytes int64, precision int) string {
	var _ms C.struct_miqt_string = C.QLocale_FormattedDataSize2(this.h, (C.longlong)(bytes), (C.int)(precision))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) FormattedDataSize3(bytes int64, precision int, format QLocale__DataSizeFormat) string {
	var _ms C.struct_miqt_string = C.QLocale_FormattedDataSize3(this.h, (C.longlong)(bytes), (C.int)(precision), (C.int)(format))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLocale_LanguageToCode2(language QLocale__Language, codeTypes QLocale__LanguageCodeType) string {
	var _ms C.struct_miqt_string = C.QLocale_LanguageToCode2((C.uint16_t)(language), (C.int)(codeTypes))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLocale) QuoteString2(str string, style QLocale__QuotationStyle) string {
	str_ms := C.struct_miqt_string{}
	str_ms.data = C.CString(str)
	str_ms.len = C.size_t(len(str))
	defer C.free(unsafe.Pointer(str_ms.data))
	var _ms C.struct_miqt_string = C.QLocale_QuoteString2(this.h, str_ms, (C.int)(style))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QLocale) Delete() {
	C.QLocale_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLocale) GoGC() {
	runtime.SetFinalizer(this, func(this *QLocale) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
