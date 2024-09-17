package qt

/*

#include "gen_qlocale.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLocale__Language int

const (
	QLocale__Language__AnyLanguage               QLocale__Language = 0
	QLocale__Language__C                         QLocale__Language = 1
	QLocale__Language__Abkhazian                 QLocale__Language = 2
	QLocale__Language__Oromo                     QLocale__Language = 3
	QLocale__Language__Afar                      QLocale__Language = 4
	QLocale__Language__Afrikaans                 QLocale__Language = 5
	QLocale__Language__Albanian                  QLocale__Language = 6
	QLocale__Language__Amharic                   QLocale__Language = 7
	QLocale__Language__Arabic                    QLocale__Language = 8
	QLocale__Language__Armenian                  QLocale__Language = 9
	QLocale__Language__Assamese                  QLocale__Language = 10
	QLocale__Language__Aymara                    QLocale__Language = 11
	QLocale__Language__Azerbaijani               QLocale__Language = 12
	QLocale__Language__Bashkir                   QLocale__Language = 13
	QLocale__Language__Basque                    QLocale__Language = 14
	QLocale__Language__Bengali                   QLocale__Language = 15
	QLocale__Language__Dzongkha                  QLocale__Language = 16
	QLocale__Language__Bihari                    QLocale__Language = 17
	QLocale__Language__Bislama                   QLocale__Language = 18
	QLocale__Language__Breton                    QLocale__Language = 19
	QLocale__Language__Bulgarian                 QLocale__Language = 20
	QLocale__Language__Burmese                   QLocale__Language = 21
	QLocale__Language__Belarusian                QLocale__Language = 22
	QLocale__Language__Khmer                     QLocale__Language = 23
	QLocale__Language__Catalan                   QLocale__Language = 24
	QLocale__Language__Chinese                   QLocale__Language = 25
	QLocale__Language__Corsican                  QLocale__Language = 26
	QLocale__Language__Croatian                  QLocale__Language = 27
	QLocale__Language__Czech                     QLocale__Language = 28
	QLocale__Language__Danish                    QLocale__Language = 29
	QLocale__Language__Dutch                     QLocale__Language = 30
	QLocale__Language__English                   QLocale__Language = 31
	QLocale__Language__Esperanto                 QLocale__Language = 32
	QLocale__Language__Estonian                  QLocale__Language = 33
	QLocale__Language__Faroese                   QLocale__Language = 34
	QLocale__Language__Fijian                    QLocale__Language = 35
	QLocale__Language__Finnish                   QLocale__Language = 36
	QLocale__Language__French                    QLocale__Language = 37
	QLocale__Language__WesternFrisian            QLocale__Language = 38
	QLocale__Language__Gaelic                    QLocale__Language = 39
	QLocale__Language__Galician                  QLocale__Language = 40
	QLocale__Language__Georgian                  QLocale__Language = 41
	QLocale__Language__German                    QLocale__Language = 42
	QLocale__Language__Greek                     QLocale__Language = 43
	QLocale__Language__Greenlandic               QLocale__Language = 44
	QLocale__Language__Guarani                   QLocale__Language = 45
	QLocale__Language__Gujarati                  QLocale__Language = 46
	QLocale__Language__Hausa                     QLocale__Language = 47
	QLocale__Language__Hebrew                    QLocale__Language = 48
	QLocale__Language__Hindi                     QLocale__Language = 49
	QLocale__Language__Hungarian                 QLocale__Language = 50
	QLocale__Language__Icelandic                 QLocale__Language = 51
	QLocale__Language__Indonesian                QLocale__Language = 52
	QLocale__Language__Interlingua               QLocale__Language = 53
	QLocale__Language__Interlingue               QLocale__Language = 54
	QLocale__Language__Inuktitut                 QLocale__Language = 55
	QLocale__Language__Inupiak                   QLocale__Language = 56
	QLocale__Language__Irish                     QLocale__Language = 57
	QLocale__Language__Italian                   QLocale__Language = 58
	QLocale__Language__Japanese                  QLocale__Language = 59
	QLocale__Language__Javanese                  QLocale__Language = 60
	QLocale__Language__Kannada                   QLocale__Language = 61
	QLocale__Language__Kashmiri                  QLocale__Language = 62
	QLocale__Language__Kazakh                    QLocale__Language = 63
	QLocale__Language__Kinyarwanda               QLocale__Language = 64
	QLocale__Language__Kirghiz                   QLocale__Language = 65
	QLocale__Language__Korean                    QLocale__Language = 66
	QLocale__Language__Kurdish                   QLocale__Language = 67
	QLocale__Language__Rundi                     QLocale__Language = 68
	QLocale__Language__Lao                       QLocale__Language = 69
	QLocale__Language__Latin                     QLocale__Language = 70
	QLocale__Language__Latvian                   QLocale__Language = 71
	QLocale__Language__Lingala                   QLocale__Language = 72
	QLocale__Language__Lithuanian                QLocale__Language = 73
	QLocale__Language__Macedonian                QLocale__Language = 74
	QLocale__Language__Malagasy                  QLocale__Language = 75
	QLocale__Language__Malay                     QLocale__Language = 76
	QLocale__Language__Malayalam                 QLocale__Language = 77
	QLocale__Language__Maltese                   QLocale__Language = 78
	QLocale__Language__Maori                     QLocale__Language = 79
	QLocale__Language__Marathi                   QLocale__Language = 80
	QLocale__Language__Marshallese               QLocale__Language = 81
	QLocale__Language__Mongolian                 QLocale__Language = 82
	QLocale__Language__NauruLanguage             QLocale__Language = 83
	QLocale__Language__Nepali                    QLocale__Language = 84
	QLocale__Language__NorwegianBokmal           QLocale__Language = 85
	QLocale__Language__Occitan                   QLocale__Language = 86
	QLocale__Language__Oriya                     QLocale__Language = 87
	QLocale__Language__Pashto                    QLocale__Language = 88
	QLocale__Language__Persian                   QLocale__Language = 89
	QLocale__Language__Polish                    QLocale__Language = 90
	QLocale__Language__Portuguese                QLocale__Language = 91
	QLocale__Language__Punjabi                   QLocale__Language = 92
	QLocale__Language__Quechua                   QLocale__Language = 93
	QLocale__Language__Romansh                   QLocale__Language = 94
	QLocale__Language__Romanian                  QLocale__Language = 95
	QLocale__Language__Russian                   QLocale__Language = 96
	QLocale__Language__Samoan                    QLocale__Language = 97
	QLocale__Language__Sango                     QLocale__Language = 98
	QLocale__Language__Sanskrit                  QLocale__Language = 99
	QLocale__Language__Serbian                   QLocale__Language = 100
	QLocale__Language__Ossetic                   QLocale__Language = 101
	QLocale__Language__SouthernSotho             QLocale__Language = 102
	QLocale__Language__Tswana                    QLocale__Language = 103
	QLocale__Language__Shona                     QLocale__Language = 104
	QLocale__Language__Sindhi                    QLocale__Language = 105
	QLocale__Language__Sinhala                   QLocale__Language = 106
	QLocale__Language__Swati                     QLocale__Language = 107
	QLocale__Language__Slovak                    QLocale__Language = 108
	QLocale__Language__Slovenian                 QLocale__Language = 109
	QLocale__Language__Somali                    QLocale__Language = 110
	QLocale__Language__Spanish                   QLocale__Language = 111
	QLocale__Language__Sundanese                 QLocale__Language = 112
	QLocale__Language__Swahili                   QLocale__Language = 113
	QLocale__Language__Swedish                   QLocale__Language = 114
	QLocale__Language__Sardinian                 QLocale__Language = 115
	QLocale__Language__Tajik                     QLocale__Language = 116
	QLocale__Language__Tamil                     QLocale__Language = 117
	QLocale__Language__Tatar                     QLocale__Language = 118
	QLocale__Language__Telugu                    QLocale__Language = 119
	QLocale__Language__Thai                      QLocale__Language = 120
	QLocale__Language__Tibetan                   QLocale__Language = 121
	QLocale__Language__Tigrinya                  QLocale__Language = 122
	QLocale__Language__Tongan                    QLocale__Language = 123
	QLocale__Language__Tsonga                    QLocale__Language = 124
	QLocale__Language__Turkish                   QLocale__Language = 125
	QLocale__Language__Turkmen                   QLocale__Language = 126
	QLocale__Language__Tahitian                  QLocale__Language = 127
	QLocale__Language__Uighur                    QLocale__Language = 128
	QLocale__Language__Ukrainian                 QLocale__Language = 129
	QLocale__Language__Urdu                      QLocale__Language = 130
	QLocale__Language__Uzbek                     QLocale__Language = 131
	QLocale__Language__Vietnamese                QLocale__Language = 132
	QLocale__Language__Volapuk                   QLocale__Language = 133
	QLocale__Language__Welsh                     QLocale__Language = 134
	QLocale__Language__Wolof                     QLocale__Language = 135
	QLocale__Language__Xhosa                     QLocale__Language = 136
	QLocale__Language__Yiddish                   QLocale__Language = 137
	QLocale__Language__Yoruba                    QLocale__Language = 138
	QLocale__Language__Zhuang                    QLocale__Language = 139
	QLocale__Language__Zulu                      QLocale__Language = 140
	QLocale__Language__NorwegianNynorsk          QLocale__Language = 141
	QLocale__Language__Bosnian                   QLocale__Language = 142
	QLocale__Language__Divehi                    QLocale__Language = 143
	QLocale__Language__Manx                      QLocale__Language = 144
	QLocale__Language__Cornish                   QLocale__Language = 145
	QLocale__Language__Akan                      QLocale__Language = 146
	QLocale__Language__Konkani                   QLocale__Language = 147
	QLocale__Language__Ga                        QLocale__Language = 148
	QLocale__Language__Igbo                      QLocale__Language = 149
	QLocale__Language__Kamba                     QLocale__Language = 150
	QLocale__Language__Syriac                    QLocale__Language = 151
	QLocale__Language__Blin                      QLocale__Language = 152
	QLocale__Language__Geez                      QLocale__Language = 153
	QLocale__Language__Koro                      QLocale__Language = 154
	QLocale__Language__Sidamo                    QLocale__Language = 155
	QLocale__Language__Atsam                     QLocale__Language = 156
	QLocale__Language__Tigre                     QLocale__Language = 157
	QLocale__Language__Jju                       QLocale__Language = 158
	QLocale__Language__Friulian                  QLocale__Language = 159
	QLocale__Language__Venda                     QLocale__Language = 160
	QLocale__Language__Ewe                       QLocale__Language = 161
	QLocale__Language__Walamo                    QLocale__Language = 162
	QLocale__Language__Hawaiian                  QLocale__Language = 163
	QLocale__Language__Tyap                      QLocale__Language = 164
	QLocale__Language__Nyanja                    QLocale__Language = 165
	QLocale__Language__Filipino                  QLocale__Language = 166
	QLocale__Language__SwissGerman               QLocale__Language = 167
	QLocale__Language__SichuanYi                 QLocale__Language = 168
	QLocale__Language__Kpelle                    QLocale__Language = 169
	QLocale__Language__LowGerman                 QLocale__Language = 170
	QLocale__Language__SouthNdebele              QLocale__Language = 171
	QLocale__Language__NorthernSotho             QLocale__Language = 172
	QLocale__Language__NorthernSami              QLocale__Language = 173
	QLocale__Language__Taroko                    QLocale__Language = 174
	QLocale__Language__Gusii                     QLocale__Language = 175
	QLocale__Language__Taita                     QLocale__Language = 176
	QLocale__Language__Fulah                     QLocale__Language = 177
	QLocale__Language__Kikuyu                    QLocale__Language = 178
	QLocale__Language__Samburu                   QLocale__Language = 179
	QLocale__Language__Sena                      QLocale__Language = 180
	QLocale__Language__NorthNdebele              QLocale__Language = 181
	QLocale__Language__Rombo                     QLocale__Language = 182
	QLocale__Language__Tachelhit                 QLocale__Language = 183
	QLocale__Language__Kabyle                    QLocale__Language = 184
	QLocale__Language__Nyankole                  QLocale__Language = 185
	QLocale__Language__Bena                      QLocale__Language = 186
	QLocale__Language__Vunjo                     QLocale__Language = 187
	QLocale__Language__Bambara                   QLocale__Language = 188
	QLocale__Language__Embu                      QLocale__Language = 189
	QLocale__Language__Cherokee                  QLocale__Language = 190
	QLocale__Language__Morisyen                  QLocale__Language = 191
	QLocale__Language__Makonde                   QLocale__Language = 192
	QLocale__Language__Langi                     QLocale__Language = 193
	QLocale__Language__Ganda                     QLocale__Language = 194
	QLocale__Language__Bemba                     QLocale__Language = 195
	QLocale__Language__Kabuverdianu              QLocale__Language = 196
	QLocale__Language__Meru                      QLocale__Language = 197
	QLocale__Language__Kalenjin                  QLocale__Language = 198
	QLocale__Language__Nama                      QLocale__Language = 199
	QLocale__Language__Machame                   QLocale__Language = 200
	QLocale__Language__Colognian                 QLocale__Language = 201
	QLocale__Language__Masai                     QLocale__Language = 202
	QLocale__Language__Soga                      QLocale__Language = 203
	QLocale__Language__Luyia                     QLocale__Language = 204
	QLocale__Language__Asu                       QLocale__Language = 205
	QLocale__Language__Teso                      QLocale__Language = 206
	QLocale__Language__Saho                      QLocale__Language = 207
	QLocale__Language__KoyraChiini               QLocale__Language = 208
	QLocale__Language__Rwa                       QLocale__Language = 209
	QLocale__Language__Luo                       QLocale__Language = 210
	QLocale__Language__Chiga                     QLocale__Language = 211
	QLocale__Language__CentralMoroccoTamazight   QLocale__Language = 212
	QLocale__Language__KoyraboroSenni            QLocale__Language = 213
	QLocale__Language__Shambala                  QLocale__Language = 214
	QLocale__Language__Bodo                      QLocale__Language = 215
	QLocale__Language__Avaric                    QLocale__Language = 216
	QLocale__Language__Chamorro                  QLocale__Language = 217
	QLocale__Language__Chechen                   QLocale__Language = 218
	QLocale__Language__Church                    QLocale__Language = 219
	QLocale__Language__Chuvash                   QLocale__Language = 220
	QLocale__Language__Cree                      QLocale__Language = 221
	QLocale__Language__Haitian                   QLocale__Language = 222
	QLocale__Language__Herero                    QLocale__Language = 223
	QLocale__Language__HiriMotu                  QLocale__Language = 224
	QLocale__Language__Kanuri                    QLocale__Language = 225
	QLocale__Language__Komi                      QLocale__Language = 226
	QLocale__Language__Kongo                     QLocale__Language = 227
	QLocale__Language__Kwanyama                  QLocale__Language = 228
	QLocale__Language__Limburgish                QLocale__Language = 229
	QLocale__Language__LubaKatanga               QLocale__Language = 230
	QLocale__Language__Luxembourgish             QLocale__Language = 231
	QLocale__Language__Navaho                    QLocale__Language = 232
	QLocale__Language__Ndonga                    QLocale__Language = 233
	QLocale__Language__Ojibwa                    QLocale__Language = 234
	QLocale__Language__Pali                      QLocale__Language = 235
	QLocale__Language__Walloon                   QLocale__Language = 236
	QLocale__Language__Aghem                     QLocale__Language = 237
	QLocale__Language__Basaa                     QLocale__Language = 238
	QLocale__Language__Zarma                     QLocale__Language = 239
	QLocale__Language__Duala                     QLocale__Language = 240
	QLocale__Language__JolaFonyi                 QLocale__Language = 241
	QLocale__Language__Ewondo                    QLocale__Language = 242
	QLocale__Language__Bafia                     QLocale__Language = 243
	QLocale__Language__MakhuwaMeetto             QLocale__Language = 244
	QLocale__Language__Mundang                   QLocale__Language = 245
	QLocale__Language__Kwasio                    QLocale__Language = 246
	QLocale__Language__Nuer                      QLocale__Language = 247
	QLocale__Language__Sakha                     QLocale__Language = 248
	QLocale__Language__Sangu                     QLocale__Language = 249
	QLocale__Language__CongoSwahili              QLocale__Language = 250
	QLocale__Language__Tasawaq                   QLocale__Language = 251
	QLocale__Language__Vai                       QLocale__Language = 252
	QLocale__Language__Walser                    QLocale__Language = 253
	QLocale__Language__Yangben                   QLocale__Language = 254
	QLocale__Language__Avestan                   QLocale__Language = 255
	QLocale__Language__Asturian                  QLocale__Language = 256
	QLocale__Language__Ngomba                    QLocale__Language = 257
	QLocale__Language__Kako                      QLocale__Language = 258
	QLocale__Language__Meta                      QLocale__Language = 259
	QLocale__Language__Ngiemboon                 QLocale__Language = 260
	QLocale__Language__Aragonese                 QLocale__Language = 261
	QLocale__Language__Akkadian                  QLocale__Language = 262
	QLocale__Language__AncientEgyptian           QLocale__Language = 263
	QLocale__Language__AncientGreek              QLocale__Language = 264
	QLocale__Language__Aramaic                   QLocale__Language = 265
	QLocale__Language__Balinese                  QLocale__Language = 266
	QLocale__Language__Bamun                     QLocale__Language = 267
	QLocale__Language__BatakToba                 QLocale__Language = 268
	QLocale__Language__Buginese                  QLocale__Language = 269
	QLocale__Language__Buhid                     QLocale__Language = 270
	QLocale__Language__Carian                    QLocale__Language = 271
	QLocale__Language__Chakma                    QLocale__Language = 272
	QLocale__Language__ClassicalMandaic          QLocale__Language = 273
	QLocale__Language__Coptic                    QLocale__Language = 274
	QLocale__Language__Dogri                     QLocale__Language = 275
	QLocale__Language__EasternCham               QLocale__Language = 276
	QLocale__Language__EasternKayah              QLocale__Language = 277
	QLocale__Language__Etruscan                  QLocale__Language = 278
	QLocale__Language__Gothic                    QLocale__Language = 279
	QLocale__Language__Hanunoo                   QLocale__Language = 280
	QLocale__Language__Ingush                    QLocale__Language = 281
	QLocale__Language__LargeFloweryMiao          QLocale__Language = 282
	QLocale__Language__Lepcha                    QLocale__Language = 283
	QLocale__Language__Limbu                     QLocale__Language = 284
	QLocale__Language__Lisu                      QLocale__Language = 285
	QLocale__Language__Lu                        QLocale__Language = 286
	QLocale__Language__Lycian                    QLocale__Language = 287
	QLocale__Language__Lydian                    QLocale__Language = 288
	QLocale__Language__Mandingo                  QLocale__Language = 289
	QLocale__Language__Manipuri                  QLocale__Language = 290
	QLocale__Language__Meroitic                  QLocale__Language = 291
	QLocale__Language__NorthernThai              QLocale__Language = 292
	QLocale__Language__OldIrish                  QLocale__Language = 293
	QLocale__Language__OldNorse                  QLocale__Language = 294
	QLocale__Language__OldPersian                QLocale__Language = 295
	QLocale__Language__OldTurkish                QLocale__Language = 296
	QLocale__Language__Pahlavi                   QLocale__Language = 297
	QLocale__Language__Parthian                  QLocale__Language = 298
	QLocale__Language__Phoenician                QLocale__Language = 299
	QLocale__Language__PrakritLanguage           QLocale__Language = 300
	QLocale__Language__Rejang                    QLocale__Language = 301
	QLocale__Language__Sabaean                   QLocale__Language = 302
	QLocale__Language__Samaritan                 QLocale__Language = 303
	QLocale__Language__Santali                   QLocale__Language = 304
	QLocale__Language__Saurashtra                QLocale__Language = 305
	QLocale__Language__Sora                      QLocale__Language = 306
	QLocale__Language__Sylheti                   QLocale__Language = 307
	QLocale__Language__Tagbanwa                  QLocale__Language = 308
	QLocale__Language__TaiDam                    QLocale__Language = 309
	QLocale__Language__TaiNua                    QLocale__Language = 310
	QLocale__Language__Ugaritic                  QLocale__Language = 311
	QLocale__Language__Akoose                    QLocale__Language = 312
	QLocale__Language__Lakota                    QLocale__Language = 313
	QLocale__Language__StandardMoroccanTamazight QLocale__Language = 314
	QLocale__Language__Mapuche                   QLocale__Language = 315
	QLocale__Language__CentralKurdish            QLocale__Language = 316
	QLocale__Language__LowerSorbian              QLocale__Language = 317
	QLocale__Language__UpperSorbian              QLocale__Language = 318
	QLocale__Language__Kenyang                   QLocale__Language = 319
	QLocale__Language__Mohawk                    QLocale__Language = 320
	QLocale__Language__Nko                       QLocale__Language = 321
	QLocale__Language__Prussian                  QLocale__Language = 322
	QLocale__Language__Kiche                     QLocale__Language = 323
	QLocale__Language__SouthernSami              QLocale__Language = 324
	QLocale__Language__LuleSami                  QLocale__Language = 325
	QLocale__Language__InariSami                 QLocale__Language = 326
	QLocale__Language__SkoltSami                 QLocale__Language = 327
	QLocale__Language__Warlpiri                  QLocale__Language = 328
	QLocale__Language__ManichaeanMiddlePersian   QLocale__Language = 329
	QLocale__Language__Mende                     QLocale__Language = 330
	QLocale__Language__AncientNorthArabian       QLocale__Language = 331
	QLocale__Language__LinearA                   QLocale__Language = 332
	QLocale__Language__HmongNjua                 QLocale__Language = 333
	QLocale__Language__Ho                        QLocale__Language = 334
	QLocale__Language__Lezghian                  QLocale__Language = 335
	QLocale__Language__Bassa                     QLocale__Language = 336
	QLocale__Language__Mono                      QLocale__Language = 337
	QLocale__Language__TedimChin                 QLocale__Language = 338
	QLocale__Language__Maithili                  QLocale__Language = 339
	QLocale__Language__Ahom                      QLocale__Language = 340
	QLocale__Language__AmericanSignLanguage      QLocale__Language = 341
	QLocale__Language__ArdhamagadhiPrakrit       QLocale__Language = 342
	QLocale__Language__Bhojpuri                  QLocale__Language = 343
	QLocale__Language__HieroglyphicLuwian        QLocale__Language = 344
	QLocale__Language__LiteraryChinese           QLocale__Language = 345
	QLocale__Language__Mazanderani               QLocale__Language = 346
	QLocale__Language__Mru                       QLocale__Language = 347
	QLocale__Language__Newari                    QLocale__Language = 348
	QLocale__Language__NorthernLuri              QLocale__Language = 349
	QLocale__Language__Palauan                   QLocale__Language = 350
	QLocale__Language__Papiamento                QLocale__Language = 351
	QLocale__Language__Saraiki                   QLocale__Language = 352
	QLocale__Language__TokelauLanguage           QLocale__Language = 353
	QLocale__Language__TokPisin                  QLocale__Language = 354
	QLocale__Language__TuvaluLanguage            QLocale__Language = 355
	QLocale__Language__UncodedLanguages          QLocale__Language = 356
	QLocale__Language__Cantonese                 QLocale__Language = 357
	QLocale__Language__Osage                     QLocale__Language = 358
	QLocale__Language__Tangut                    QLocale__Language = 359
	QLocale__Language__Ido                       QLocale__Language = 360
	QLocale__Language__Lojban                    QLocale__Language = 361
	QLocale__Language__Sicilian                  QLocale__Language = 362
	QLocale__Language__SouthernKurdish           QLocale__Language = 363
	QLocale__Language__WesternBalochi            QLocale__Language = 364
	QLocale__Language__Cebuano                   QLocale__Language = 365
	QLocale__Language__Erzya                     QLocale__Language = 366
	QLocale__Language__Chickasaw                 QLocale__Language = 367
	QLocale__Language__Muscogee                  QLocale__Language = 368
	QLocale__Language__Silesian                  QLocale__Language = 369
	QLocale__Language__NigerianPidgin            QLocale__Language = 370
	QLocale__Language__Afan                      QLocale__Language = 3
	QLocale__Language__Bhutani                   QLocale__Language = 16
	QLocale__Language__Byelorussian              QLocale__Language = 22
	QLocale__Language__Cambodian                 QLocale__Language = 23
	QLocale__Language__Chewa                     QLocale__Language = 165
	QLocale__Language__Frisian                   QLocale__Language = 38
	QLocale__Language__Kurundi                   QLocale__Language = 68
	QLocale__Language__Moldavian                 QLocale__Language = 95
	QLocale__Language__Norwegian                 QLocale__Language = 85
	QLocale__Language__RhaetoRomance             QLocale__Language = 94
	QLocale__Language__SerboCroatian             QLocale__Language = 100
	QLocale__Language__Tagalog                   QLocale__Language = 166
	QLocale__Language__Twi                       QLocale__Language = 146
	QLocale__Language__Uigur                     QLocale__Language = 128
	QLocale__Language__LastLanguage              QLocale__Language = 370
)

type QLocale__Script int

const (
	QLocale__Script__AnyScript                   QLocale__Script = 0
	QLocale__Script__ArabicScript                QLocale__Script = 1
	QLocale__Script__CyrillicScript              QLocale__Script = 2
	QLocale__Script__DeseretScript               QLocale__Script = 3
	QLocale__Script__GurmukhiScript              QLocale__Script = 4
	QLocale__Script__SimplifiedHanScript         QLocale__Script = 5
	QLocale__Script__TraditionalHanScript        QLocale__Script = 6
	QLocale__Script__LatinScript                 QLocale__Script = 7
	QLocale__Script__MongolianScript             QLocale__Script = 8
	QLocale__Script__TifinaghScript              QLocale__Script = 9
	QLocale__Script__ArmenianScript              QLocale__Script = 10
	QLocale__Script__BengaliScript               QLocale__Script = 11
	QLocale__Script__CherokeeScript              QLocale__Script = 12
	QLocale__Script__DevanagariScript            QLocale__Script = 13
	QLocale__Script__EthiopicScript              QLocale__Script = 14
	QLocale__Script__GeorgianScript              QLocale__Script = 15
	QLocale__Script__GreekScript                 QLocale__Script = 16
	QLocale__Script__GujaratiScript              QLocale__Script = 17
	QLocale__Script__HebrewScript                QLocale__Script = 18
	QLocale__Script__JapaneseScript              QLocale__Script = 19
	QLocale__Script__KhmerScript                 QLocale__Script = 20
	QLocale__Script__KannadaScript               QLocale__Script = 21
	QLocale__Script__KoreanScript                QLocale__Script = 22
	QLocale__Script__LaoScript                   QLocale__Script = 23
	QLocale__Script__MalayalamScript             QLocale__Script = 24
	QLocale__Script__MyanmarScript               QLocale__Script = 25
	QLocale__Script__OriyaScript                 QLocale__Script = 26
	QLocale__Script__TamilScript                 QLocale__Script = 27
	QLocale__Script__TeluguScript                QLocale__Script = 28
	QLocale__Script__ThaanaScript                QLocale__Script = 29
	QLocale__Script__ThaiScript                  QLocale__Script = 30
	QLocale__Script__TibetanScript               QLocale__Script = 31
	QLocale__Script__SinhalaScript               QLocale__Script = 32
	QLocale__Script__SyriacScript                QLocale__Script = 33
	QLocale__Script__YiScript                    QLocale__Script = 34
	QLocale__Script__VaiScript                   QLocale__Script = 35
	QLocale__Script__AvestanScript               QLocale__Script = 36
	QLocale__Script__BalineseScript              QLocale__Script = 37
	QLocale__Script__BamumScript                 QLocale__Script = 38
	QLocale__Script__BatakScript                 QLocale__Script = 39
	QLocale__Script__BopomofoScript              QLocale__Script = 40
	QLocale__Script__BrahmiScript                QLocale__Script = 41
	QLocale__Script__BugineseScript              QLocale__Script = 42
	QLocale__Script__BuhidScript                 QLocale__Script = 43
	QLocale__Script__CanadianAboriginalScript    QLocale__Script = 44
	QLocale__Script__CarianScript                QLocale__Script = 45
	QLocale__Script__ChakmaScript                QLocale__Script = 46
	QLocale__Script__ChamScript                  QLocale__Script = 47
	QLocale__Script__CopticScript                QLocale__Script = 48
	QLocale__Script__CypriotScript               QLocale__Script = 49
	QLocale__Script__EgyptianHieroglyphsScript   QLocale__Script = 50
	QLocale__Script__FraserScript                QLocale__Script = 51
	QLocale__Script__GlagoliticScript            QLocale__Script = 52
	QLocale__Script__GothicScript                QLocale__Script = 53
	QLocale__Script__HanScript                   QLocale__Script = 54
	QLocale__Script__HangulScript                QLocale__Script = 55
	QLocale__Script__HanunooScript               QLocale__Script = 56
	QLocale__Script__ImperialAramaicScript       QLocale__Script = 57
	QLocale__Script__InscriptionalPahlaviScript  QLocale__Script = 58
	QLocale__Script__InscriptionalParthianScript QLocale__Script = 59
	QLocale__Script__JavaneseScript              QLocale__Script = 60
	QLocale__Script__KaithiScript                QLocale__Script = 61
	QLocale__Script__KatakanaScript              QLocale__Script = 62
	QLocale__Script__KayahLiScript               QLocale__Script = 63
	QLocale__Script__KharoshthiScript            QLocale__Script = 64
	QLocale__Script__LannaScript                 QLocale__Script = 65
	QLocale__Script__LepchaScript                QLocale__Script = 66
	QLocale__Script__LimbuScript                 QLocale__Script = 67
	QLocale__Script__LinearBScript               QLocale__Script = 68
	QLocale__Script__LycianScript                QLocale__Script = 69
	QLocale__Script__LydianScript                QLocale__Script = 70
	QLocale__Script__MandaeanScript              QLocale__Script = 71
	QLocale__Script__MeiteiMayekScript           QLocale__Script = 72
	QLocale__Script__MeroiticScript              QLocale__Script = 73
	QLocale__Script__MeroiticCursiveScript       QLocale__Script = 74
	QLocale__Script__NkoScript                   QLocale__Script = 75
	QLocale__Script__NewTaiLueScript             QLocale__Script = 76
	QLocale__Script__OghamScript                 QLocale__Script = 77
	QLocale__Script__OlChikiScript               QLocale__Script = 78
	QLocale__Script__OldItalicScript             QLocale__Script = 79
	QLocale__Script__OldPersianScript            QLocale__Script = 80
	QLocale__Script__OldSouthArabianScript       QLocale__Script = 81
	QLocale__Script__OrkhonScript                QLocale__Script = 82
	QLocale__Script__OsmanyaScript               QLocale__Script = 83
	QLocale__Script__PhagsPaScript               QLocale__Script = 84
	QLocale__Script__PhoenicianScript            QLocale__Script = 85
	QLocale__Script__PollardPhoneticScript       QLocale__Script = 86
	QLocale__Script__RejangScript                QLocale__Script = 87
	QLocale__Script__RunicScript                 QLocale__Script = 88
	QLocale__Script__SamaritanScript             QLocale__Script = 89
	QLocale__Script__SaurashtraScript            QLocale__Script = 90
	QLocale__Script__SharadaScript               QLocale__Script = 91
	QLocale__Script__ShavianScript               QLocale__Script = 92
	QLocale__Script__SoraSompengScript           QLocale__Script = 93
	QLocale__Script__CuneiformScript             QLocale__Script = 94
	QLocale__Script__SundaneseScript             QLocale__Script = 95
	QLocale__Script__SylotiNagriScript           QLocale__Script = 96
	QLocale__Script__TagalogScript               QLocale__Script = 97
	QLocale__Script__TagbanwaScript              QLocale__Script = 98
	QLocale__Script__TaiLeScript                 QLocale__Script = 99
	QLocale__Script__TaiVietScript               QLocale__Script = 100
	QLocale__Script__TakriScript                 QLocale__Script = 101
	QLocale__Script__UgariticScript              QLocale__Script = 102
	QLocale__Script__BrailleScript               QLocale__Script = 103
	QLocale__Script__HiraganaScript              QLocale__Script = 104
	QLocale__Script__CaucasianAlbanianScript     QLocale__Script = 105
	QLocale__Script__BassaVahScript              QLocale__Script = 106
	QLocale__Script__DuployanScript              QLocale__Script = 107
	QLocale__Script__ElbasanScript               QLocale__Script = 108
	QLocale__Script__GranthaScript               QLocale__Script = 109
	QLocale__Script__PahawhHmongScript           QLocale__Script = 110
	QLocale__Script__KhojkiScript                QLocale__Script = 111
	QLocale__Script__LinearAScript               QLocale__Script = 112
	QLocale__Script__MahajaniScript              QLocale__Script = 113
	QLocale__Script__ManichaeanScript            QLocale__Script = 114
	QLocale__Script__MendeKikakuiScript          QLocale__Script = 115
	QLocale__Script__ModiScript                  QLocale__Script = 116
	QLocale__Script__MroScript                   QLocale__Script = 117
	QLocale__Script__OldNorthArabianScript       QLocale__Script = 118
	QLocale__Script__NabataeanScript             QLocale__Script = 119
	QLocale__Script__PalmyreneScript             QLocale__Script = 120
	QLocale__Script__PauCinHauScript             QLocale__Script = 121
	QLocale__Script__OldPermicScript             QLocale__Script = 122
	QLocale__Script__PsalterPahlaviScript        QLocale__Script = 123
	QLocale__Script__SiddhamScript               QLocale__Script = 124
	QLocale__Script__KhudawadiScript             QLocale__Script = 125
	QLocale__Script__TirhutaScript               QLocale__Script = 126
	QLocale__Script__VarangKshitiScript          QLocale__Script = 127
	QLocale__Script__AhomScript                  QLocale__Script = 128
	QLocale__Script__AnatolianHieroglyphsScript  QLocale__Script = 129
	QLocale__Script__HatranScript                QLocale__Script = 130
	QLocale__Script__MultaniScript               QLocale__Script = 131
	QLocale__Script__OldHungarianScript          QLocale__Script = 132
	QLocale__Script__SignWritingScript           QLocale__Script = 133
	QLocale__Script__AdlamScript                 QLocale__Script = 134
	QLocale__Script__BhaiksukiScript             QLocale__Script = 135
	QLocale__Script__MarchenScript               QLocale__Script = 136
	QLocale__Script__NewaScript                  QLocale__Script = 137
	QLocale__Script__OsageScript                 QLocale__Script = 138
	QLocale__Script__TangutScript                QLocale__Script = 139
	QLocale__Script__HanWithBopomofoScript       QLocale__Script = 140
	QLocale__Script__JamoScript                  QLocale__Script = 141
	QLocale__Script__SimplifiedChineseScript     QLocale__Script = 5
	QLocale__Script__TraditionalChineseScript    QLocale__Script = 6
	QLocale__Script__LastScript                  QLocale__Script = 141
)

type QLocale__Country int

const (
	QLocale__Country__AnyCountry                             QLocale__Country = 0
	QLocale__Country__Afghanistan                            QLocale__Country = 1
	QLocale__Country__Albania                                QLocale__Country = 2
	QLocale__Country__Algeria                                QLocale__Country = 3
	QLocale__Country__AmericanSamoa                          QLocale__Country = 4
	QLocale__Country__Andorra                                QLocale__Country = 5
	QLocale__Country__Angola                                 QLocale__Country = 6
	QLocale__Country__Anguilla                               QLocale__Country = 7
	QLocale__Country__Antarctica                             QLocale__Country = 8
	QLocale__Country__AntiguaAndBarbuda                      QLocale__Country = 9
	QLocale__Country__Argentina                              QLocale__Country = 10
	QLocale__Country__Armenia                                QLocale__Country = 11
	QLocale__Country__Aruba                                  QLocale__Country = 12
	QLocale__Country__Australia                              QLocale__Country = 13
	QLocale__Country__Austria                                QLocale__Country = 14
	QLocale__Country__Azerbaijan                             QLocale__Country = 15
	QLocale__Country__Bahamas                                QLocale__Country = 16
	QLocale__Country__Bahrain                                QLocale__Country = 17
	QLocale__Country__Bangladesh                             QLocale__Country = 18
	QLocale__Country__Barbados                               QLocale__Country = 19
	QLocale__Country__Belarus                                QLocale__Country = 20
	QLocale__Country__Belgium                                QLocale__Country = 21
	QLocale__Country__Belize                                 QLocale__Country = 22
	QLocale__Country__Benin                                  QLocale__Country = 23
	QLocale__Country__Bermuda                                QLocale__Country = 24
	QLocale__Country__Bhutan                                 QLocale__Country = 25
	QLocale__Country__Bolivia                                QLocale__Country = 26
	QLocale__Country__BosniaAndHerzegowina                   QLocale__Country = 27
	QLocale__Country__Botswana                               QLocale__Country = 28
	QLocale__Country__BouvetIsland                           QLocale__Country = 29
	QLocale__Country__Brazil                                 QLocale__Country = 30
	QLocale__Country__BritishIndianOceanTerritory            QLocale__Country = 31
	QLocale__Country__Brunei                                 QLocale__Country = 32
	QLocale__Country__Bulgaria                               QLocale__Country = 33
	QLocale__Country__BurkinaFaso                            QLocale__Country = 34
	QLocale__Country__Burundi                                QLocale__Country = 35
	QLocale__Country__Cambodia                               QLocale__Country = 36
	QLocale__Country__Cameroon                               QLocale__Country = 37
	QLocale__Country__Canada                                 QLocale__Country = 38
	QLocale__Country__CapeVerde                              QLocale__Country = 39
	QLocale__Country__CaymanIslands                          QLocale__Country = 40
	QLocale__Country__CentralAfricanRepublic                 QLocale__Country = 41
	QLocale__Country__Chad                                   QLocale__Country = 42
	QLocale__Country__Chile                                  QLocale__Country = 43
	QLocale__Country__China                                  QLocale__Country = 44
	QLocale__Country__ChristmasIsland                        QLocale__Country = 45
	QLocale__Country__CocosIslands                           QLocale__Country = 46
	QLocale__Country__Colombia                               QLocale__Country = 47
	QLocale__Country__Comoros                                QLocale__Country = 48
	QLocale__Country__CongoKinshasa                          QLocale__Country = 49
	QLocale__Country__CongoBrazzaville                       QLocale__Country = 50
	QLocale__Country__CookIslands                            QLocale__Country = 51
	QLocale__Country__CostaRica                              QLocale__Country = 52
	QLocale__Country__IvoryCoast                             QLocale__Country = 53
	QLocale__Country__Croatia                                QLocale__Country = 54
	QLocale__Country__Cuba                                   QLocale__Country = 55
	QLocale__Country__Cyprus                                 QLocale__Country = 56
	QLocale__Country__CzechRepublic                          QLocale__Country = 57
	QLocale__Country__Denmark                                QLocale__Country = 58
	QLocale__Country__Djibouti                               QLocale__Country = 59
	QLocale__Country__Dominica                               QLocale__Country = 60
	QLocale__Country__DominicanRepublic                      QLocale__Country = 61
	QLocale__Country__EastTimor                              QLocale__Country = 62
	QLocale__Country__Ecuador                                QLocale__Country = 63
	QLocale__Country__Egypt                                  QLocale__Country = 64
	QLocale__Country__ElSalvador                             QLocale__Country = 65
	QLocale__Country__EquatorialGuinea                       QLocale__Country = 66
	QLocale__Country__Eritrea                                QLocale__Country = 67
	QLocale__Country__Estonia                                QLocale__Country = 68
	QLocale__Country__Ethiopia                               QLocale__Country = 69
	QLocale__Country__FalklandIslands                        QLocale__Country = 70
	QLocale__Country__FaroeIslands                           QLocale__Country = 71
	QLocale__Country__Fiji                                   QLocale__Country = 72
	QLocale__Country__Finland                                QLocale__Country = 73
	QLocale__Country__France                                 QLocale__Country = 74
	QLocale__Country__Guernsey                               QLocale__Country = 75
	QLocale__Country__FrenchGuiana                           QLocale__Country = 76
	QLocale__Country__FrenchPolynesia                        QLocale__Country = 77
	QLocale__Country__FrenchSouthernTerritories              QLocale__Country = 78
	QLocale__Country__Gabon                                  QLocale__Country = 79
	QLocale__Country__Gambia                                 QLocale__Country = 80
	QLocale__Country__Georgia                                QLocale__Country = 81
	QLocale__Country__Germany                                QLocale__Country = 82
	QLocale__Country__Ghana                                  QLocale__Country = 83
	QLocale__Country__Gibraltar                              QLocale__Country = 84
	QLocale__Country__Greece                                 QLocale__Country = 85
	QLocale__Country__Greenland                              QLocale__Country = 86
	QLocale__Country__Grenada                                QLocale__Country = 87
	QLocale__Country__Guadeloupe                             QLocale__Country = 88
	QLocale__Country__Guam                                   QLocale__Country = 89
	QLocale__Country__Guatemala                              QLocale__Country = 90
	QLocale__Country__Guinea                                 QLocale__Country = 91
	QLocale__Country__GuineaBissau                           QLocale__Country = 92
	QLocale__Country__Guyana                                 QLocale__Country = 93
	QLocale__Country__Haiti                                  QLocale__Country = 94
	QLocale__Country__HeardAndMcDonaldIslands                QLocale__Country = 95
	QLocale__Country__Honduras                               QLocale__Country = 96
	QLocale__Country__HongKong                               QLocale__Country = 97
	QLocale__Country__Hungary                                QLocale__Country = 98
	QLocale__Country__Iceland                                QLocale__Country = 99
	QLocale__Country__India                                  QLocale__Country = 100
	QLocale__Country__Indonesia                              QLocale__Country = 101
	QLocale__Country__Iran                                   QLocale__Country = 102
	QLocale__Country__Iraq                                   QLocale__Country = 103
	QLocale__Country__Ireland                                QLocale__Country = 104
	QLocale__Country__Israel                                 QLocale__Country = 105
	QLocale__Country__Italy                                  QLocale__Country = 106
	QLocale__Country__Jamaica                                QLocale__Country = 107
	QLocale__Country__Japan                                  QLocale__Country = 108
	QLocale__Country__Jordan                                 QLocale__Country = 109
	QLocale__Country__Kazakhstan                             QLocale__Country = 110
	QLocale__Country__Kenya                                  QLocale__Country = 111
	QLocale__Country__Kiribati                               QLocale__Country = 112
	QLocale__Country__NorthKorea                             QLocale__Country = 113
	QLocale__Country__SouthKorea                             QLocale__Country = 114
	QLocale__Country__Kuwait                                 QLocale__Country = 115
	QLocale__Country__Kyrgyzstan                             QLocale__Country = 116
	QLocale__Country__Laos                                   QLocale__Country = 117
	QLocale__Country__Latvia                                 QLocale__Country = 118
	QLocale__Country__Lebanon                                QLocale__Country = 119
	QLocale__Country__Lesotho                                QLocale__Country = 120
	QLocale__Country__Liberia                                QLocale__Country = 121
	QLocale__Country__Libya                                  QLocale__Country = 122
	QLocale__Country__Liechtenstein                          QLocale__Country = 123
	QLocale__Country__Lithuania                              QLocale__Country = 124
	QLocale__Country__Luxembourg                             QLocale__Country = 125
	QLocale__Country__Macau                                  QLocale__Country = 126
	QLocale__Country__Macedonia                              QLocale__Country = 127
	QLocale__Country__Madagascar                             QLocale__Country = 128
	QLocale__Country__Malawi                                 QLocale__Country = 129
	QLocale__Country__Malaysia                               QLocale__Country = 130
	QLocale__Country__Maldives                               QLocale__Country = 131
	QLocale__Country__Mali                                   QLocale__Country = 132
	QLocale__Country__Malta                                  QLocale__Country = 133
	QLocale__Country__MarshallIslands                        QLocale__Country = 134
	QLocale__Country__Martinique                             QLocale__Country = 135
	QLocale__Country__Mauritania                             QLocale__Country = 136
	QLocale__Country__Mauritius                              QLocale__Country = 137
	QLocale__Country__Mayotte                                QLocale__Country = 138
	QLocale__Country__Mexico                                 QLocale__Country = 139
	QLocale__Country__Micronesia                             QLocale__Country = 140
	QLocale__Country__Moldova                                QLocale__Country = 141
	QLocale__Country__Monaco                                 QLocale__Country = 142
	QLocale__Country__Mongolia                               QLocale__Country = 143
	QLocale__Country__Montserrat                             QLocale__Country = 144
	QLocale__Country__Morocco                                QLocale__Country = 145
	QLocale__Country__Mozambique                             QLocale__Country = 146
	QLocale__Country__Myanmar                                QLocale__Country = 147
	QLocale__Country__Namibia                                QLocale__Country = 148
	QLocale__Country__NauruCountry                           QLocale__Country = 149
	QLocale__Country__Nepal                                  QLocale__Country = 150
	QLocale__Country__Netherlands                            QLocale__Country = 151
	QLocale__Country__CuraSao                                QLocale__Country = 152
	QLocale__Country__NewCaledonia                           QLocale__Country = 153
	QLocale__Country__NewZealand                             QLocale__Country = 154
	QLocale__Country__Nicaragua                              QLocale__Country = 155
	QLocale__Country__Niger                                  QLocale__Country = 156
	QLocale__Country__Nigeria                                QLocale__Country = 157
	QLocale__Country__Niue                                   QLocale__Country = 158
	QLocale__Country__NorfolkIsland                          QLocale__Country = 159
	QLocale__Country__NorthernMarianaIslands                 QLocale__Country = 160
	QLocale__Country__Norway                                 QLocale__Country = 161
	QLocale__Country__Oman                                   QLocale__Country = 162
	QLocale__Country__Pakistan                               QLocale__Country = 163
	QLocale__Country__Palau                                  QLocale__Country = 164
	QLocale__Country__PalestinianTerritories                 QLocale__Country = 165
	QLocale__Country__Panama                                 QLocale__Country = 166
	QLocale__Country__PapuaNewGuinea                         QLocale__Country = 167
	QLocale__Country__Paraguay                               QLocale__Country = 168
	QLocale__Country__Peru                                   QLocale__Country = 169
	QLocale__Country__Philippines                            QLocale__Country = 170
	QLocale__Country__Pitcairn                               QLocale__Country = 171
	QLocale__Country__Poland                                 QLocale__Country = 172
	QLocale__Country__Portugal                               QLocale__Country = 173
	QLocale__Country__PuertoRico                             QLocale__Country = 174
	QLocale__Country__Qatar                                  QLocale__Country = 175
	QLocale__Country__Reunion                                QLocale__Country = 176
	QLocale__Country__Romania                                QLocale__Country = 177
	QLocale__Country__Russia                                 QLocale__Country = 178
	QLocale__Country__Rwanda                                 QLocale__Country = 179
	QLocale__Country__SaintKittsAndNevis                     QLocale__Country = 180
	QLocale__Country__SaintLucia                             QLocale__Country = 181
	QLocale__Country__SaintVincentAndTheGrenadines           QLocale__Country = 182
	QLocale__Country__Samoa                                  QLocale__Country = 183
	QLocale__Country__SanMarino                              QLocale__Country = 184
	QLocale__Country__SaoTomeAndPrincipe                     QLocale__Country = 185
	QLocale__Country__SaudiArabia                            QLocale__Country = 186
	QLocale__Country__Senegal                                QLocale__Country = 187
	QLocale__Country__Seychelles                             QLocale__Country = 188
	QLocale__Country__SierraLeone                            QLocale__Country = 189
	QLocale__Country__Singapore                              QLocale__Country = 190
	QLocale__Country__Slovakia                               QLocale__Country = 191
	QLocale__Country__Slovenia                               QLocale__Country = 192
	QLocale__Country__SolomonIslands                         QLocale__Country = 193
	QLocale__Country__Somalia                                QLocale__Country = 194
	QLocale__Country__SouthAfrica                            QLocale__Country = 195
	QLocale__Country__SouthGeorgiaAndTheSouthSandwichIslands QLocale__Country = 196
	QLocale__Country__Spain                                  QLocale__Country = 197
	QLocale__Country__SriLanka                               QLocale__Country = 198
	QLocale__Country__SaintHelena                            QLocale__Country = 199
	QLocale__Country__SaintPierreAndMiquelon                 QLocale__Country = 200
	QLocale__Country__Sudan                                  QLocale__Country = 201
	QLocale__Country__Suriname                               QLocale__Country = 202
	QLocale__Country__SvalbardAndJanMayenIslands             QLocale__Country = 203
	QLocale__Country__Swaziland                              QLocale__Country = 204
	QLocale__Country__Sweden                                 QLocale__Country = 205
	QLocale__Country__Switzerland                            QLocale__Country = 206
	QLocale__Country__Syria                                  QLocale__Country = 207
	QLocale__Country__Taiwan                                 QLocale__Country = 208
	QLocale__Country__Tajikistan                             QLocale__Country = 209
	QLocale__Country__Tanzania                               QLocale__Country = 210
	QLocale__Country__Thailand                               QLocale__Country = 211
	QLocale__Country__Togo                                   QLocale__Country = 212
	QLocale__Country__TokelauCountry                         QLocale__Country = 213
	QLocale__Country__Tonga                                  QLocale__Country = 214
	QLocale__Country__TrinidadAndTobago                      QLocale__Country = 215
	QLocale__Country__Tunisia                                QLocale__Country = 216
	QLocale__Country__Turkey                                 QLocale__Country = 217
	QLocale__Country__Turkmenistan                           QLocale__Country = 218
	QLocale__Country__TurksAndCaicosIslands                  QLocale__Country = 219
	QLocale__Country__TuvaluCountry                          QLocale__Country = 220
	QLocale__Country__Uganda                                 QLocale__Country = 221
	QLocale__Country__Ukraine                                QLocale__Country = 222
	QLocale__Country__UnitedArabEmirates                     QLocale__Country = 223
	QLocale__Country__UnitedKingdom                          QLocale__Country = 224
	QLocale__Country__UnitedStates                           QLocale__Country = 225
	QLocale__Country__UnitedStatesMinorOutlyingIslands       QLocale__Country = 226
	QLocale__Country__Uruguay                                QLocale__Country = 227
	QLocale__Country__Uzbekistan                             QLocale__Country = 228
	QLocale__Country__Vanuatu                                QLocale__Country = 229
	QLocale__Country__VaticanCityState                       QLocale__Country = 230
	QLocale__Country__Venezuela                              QLocale__Country = 231
	QLocale__Country__Vietnam                                QLocale__Country = 232
	QLocale__Country__BritishVirginIslands                   QLocale__Country = 233
	QLocale__Country__UnitedStatesVirginIslands              QLocale__Country = 234
	QLocale__Country__WallisAndFutunaIslands                 QLocale__Country = 235
	QLocale__Country__WesternSahara                          QLocale__Country = 236
	QLocale__Country__Yemen                                  QLocale__Country = 237
	QLocale__Country__CanaryIslands                          QLocale__Country = 238
	QLocale__Country__Zambia                                 QLocale__Country = 239
	QLocale__Country__Zimbabwe                               QLocale__Country = 240
	QLocale__Country__ClippertonIsland                       QLocale__Country = 241
	QLocale__Country__Montenegro                             QLocale__Country = 242
	QLocale__Country__Serbia                                 QLocale__Country = 243
	QLocale__Country__SaintBarthelemy                        QLocale__Country = 244
	QLocale__Country__SaintMartin                            QLocale__Country = 245
	QLocale__Country__LatinAmerica                           QLocale__Country = 246
	QLocale__Country__AscensionIsland                        QLocale__Country = 247
	QLocale__Country__AlandIslands                           QLocale__Country = 248
	QLocale__Country__DiegoGarcia                            QLocale__Country = 249
	QLocale__Country__CeutaAndMelilla                        QLocale__Country = 250
	QLocale__Country__IsleOfMan                              QLocale__Country = 251
	QLocale__Country__Jersey                                 QLocale__Country = 252
	QLocale__Country__TristanDaCunha                         QLocale__Country = 253
	QLocale__Country__SouthSudan                             QLocale__Country = 254
	QLocale__Country__Bonaire                                QLocale__Country = 255
	QLocale__Country__SintMaarten                            QLocale__Country = 256
	QLocale__Country__Kosovo                                 QLocale__Country = 257
	QLocale__Country__EuropeanUnion                          QLocale__Country = 258
	QLocale__Country__OutlyingOceania                        QLocale__Country = 259
	QLocale__Country__World                                  QLocale__Country = 260
	QLocale__Country__Europe                                 QLocale__Country = 261
	QLocale__Country__DemocraticRepublicOfCongo              QLocale__Country = 49
	QLocale__Country__DemocraticRepublicOfKorea              QLocale__Country = 113
	QLocale__Country__LatinAmericaAndTheCaribbean            QLocale__Country = 246
	QLocale__Country__PeoplesRepublicOfCongo                 QLocale__Country = 50
	QLocale__Country__RepublicOfKorea                        QLocale__Country = 114
	QLocale__Country__RussianFederation                      QLocale__Country = 178
	QLocale__Country__SyrianArabRepublic                     QLocale__Country = 207
	QLocale__Country__Tokelau                                QLocale__Country = 213
	QLocale__Country__Tuvalu                                 QLocale__Country = 220
	QLocale__Country__LastCountry                            QLocale__Country = 261
)

type QLocale__MeasurementSystem int

const (
	QLocale__MeasurementSystem__MetricSystem     QLocale__MeasurementSystem = 0
	QLocale__MeasurementSystem__ImperialUSSystem QLocale__MeasurementSystem = 1
	QLocale__MeasurementSystem__ImperialUKSystem QLocale__MeasurementSystem = 2
	QLocale__MeasurementSystem__ImperialSystem   QLocale__MeasurementSystem = 1
)

type QLocale__FormatType int

const (
	QLocale__FormatType__LongFormat   QLocale__FormatType = 0
	QLocale__FormatType__ShortFormat  QLocale__FormatType = 1
	QLocale__FormatType__NarrowFormat QLocale__FormatType = 2
)

type QLocale__NumberOption int

const (
	QLocale__NumberOption__DefaultNumberOptions          QLocale__NumberOption = 0
	QLocale__NumberOption__OmitGroupSeparator            QLocale__NumberOption = 1
	QLocale__NumberOption__RejectGroupSeparator          QLocale__NumberOption = 2
	QLocale__NumberOption__OmitLeadingZeroInExponent     QLocale__NumberOption = 4
	QLocale__NumberOption__RejectLeadingZeroInExponent   QLocale__NumberOption = 8
	QLocale__NumberOption__IncludeTrailingZeroesAfterDot QLocale__NumberOption = 16
	QLocale__NumberOption__RejectTrailingZeroesAfterDot  QLocale__NumberOption = 32
)

type QLocale__FloatingPointPrecisionOption int

const (
	QLocale__FloatingPointPrecisionOption__FloatingPointShortest QLocale__FloatingPointPrecisionOption = -128
)

type QLocale__CurrencySymbolFormat int

const (
	QLocale__CurrencySymbolFormat__CurrencyIsoCode     QLocale__CurrencySymbolFormat = 0
	QLocale__CurrencySymbolFormat__CurrencySymbol      QLocale__CurrencySymbolFormat = 1
	QLocale__CurrencySymbolFormat__CurrencyDisplayName QLocale__CurrencySymbolFormat = 2
)

type QLocale__DataSizeFormat int

const (
	QLocale__DataSizeFormat__DataSizeBase1000          QLocale__DataSizeFormat = 1
	QLocale__DataSizeFormat__DataSizeSIQuantifiers     QLocale__DataSizeFormat = 2
	QLocale__DataSizeFormat__DataSizeIecFormat         QLocale__DataSizeFormat = 0
	QLocale__DataSizeFormat__DataSizeTraditionalFormat QLocale__DataSizeFormat = 2
	QLocale__DataSizeFormat__DataSizeSIFormat          QLocale__DataSizeFormat = 3
)

type QLocale__QuotationStyle int

const (
	QLocale__QuotationStyle__StandardQuotation  QLocale__QuotationStyle = 0
	QLocale__QuotationStyle__AlternateQuotation QLocale__QuotationStyle = 1
)

type QLocale struct {
	h *C.QLocale
}

func (this *QLocale) cPointer() *C.QLocale {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLocale(h *C.QLocale) *QLocale {
	if h == nil {
		return nil
	}
	return &QLocale{h: h}
}

func newQLocale_U(h unsafe.Pointer) *QLocale {
	return newQLocale((*C.QLocale)(h))
}

// NewQLocale constructs a new QLocale object.
func NewQLocale() *QLocale {
	ret := C.QLocale_new()
	return newQLocale(ret)
}

// NewQLocale2 constructs a new QLocale object.
func NewQLocale2(name string) *QLocale {
	name_ms := miqt_strdupg(name)
	defer C.free(name_ms)
	ret := C.QLocale_new2((*C.struct_miqt_string)(name_ms))
	return newQLocale(ret)
}

// NewQLocale3 constructs a new QLocale object.
func NewQLocale3(language QLocale__Language) *QLocale {
	ret := C.QLocale_new3((C.uintptr_t)(language))
	return newQLocale(ret)
}

// NewQLocale4 constructs a new QLocale object.
func NewQLocale4(language QLocale__Language, script QLocale__Script, country QLocale__Country) *QLocale {
	ret := C.QLocale_new4((C.uintptr_t)(language), (C.uintptr_t)(script), (C.uintptr_t)(country))
	return newQLocale(ret)
}

// NewQLocale5 constructs a new QLocale object.
func NewQLocale5(other *QLocale) *QLocale {
	ret := C.QLocale_new5(other.cPointer())
	return newQLocale(ret)
}

// NewQLocale6 constructs a new QLocale object.
func NewQLocale6(language QLocale__Language, country QLocale__Country) *QLocale {
	ret := C.QLocale_new6((C.uintptr_t)(language), (C.uintptr_t)(country))
	return newQLocale(ret)
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

func (this *QLocale) Country() QLocale__Country {
	return (QLocale__Country)(C.QLocale_Country(this.h))
}

func (this *QLocale) Name() string {
	var _ms *C.struct_miqt_string = C.QLocale_Name(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) Bcp47Name() string {
	var _ms *C.struct_miqt_string = C.QLocale_Bcp47Name(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) NativeLanguageName() string {
	var _ms *C.struct_miqt_string = C.QLocale_NativeLanguageName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) NativeCountryName() string {
	var _ms *C.struct_miqt_string = C.QLocale_NativeCountryName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToShort(s string) int16 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (int16)(C.QLocale_ToShort(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToUShort(s string) uint16 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (uint16)(C.QLocale_ToUShort(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToInt(s string) int {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (int)(C.QLocale_ToInt(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToUInt(s string) uint {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (uint)(C.QLocale_ToUInt(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToLong(s string) int64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (int64)(C.QLocale_ToLong(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToULong(s string) uint64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (uint64)(C.QLocale_ToULong(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToLongLong(s string) int64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (int64)(C.QLocale_ToLongLong(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToULongLong(s string) uint64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (uint64)(C.QLocale_ToULongLong(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToFloat(s string) float32 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (float32)(C.QLocale_ToFloat(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToDouble(s string) float64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (float64)(C.QLocale_ToDouble(this.h, (*C.struct_miqt_string)(s_ms)))
}

func (this *QLocale) ToString(i int64) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString(this.h, (C.int64_t)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithQulonglong(i uint64) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithQulonglong(this.h, (C.uint64_t)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithLong(i int64) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithLong(this.h, (C.long)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithUlong(i uint64) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithUlong(this.h, (C.ulong)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithShort(i int16) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithShort(this.h, (C.int16_t)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithUshort(i uint16) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithUshort(this.h, (C.uint16_t)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithInt(i int) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithInt(this.h, (C.int)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithUint(i uint) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithUint(this.h, (C.uint)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithDouble(i float64) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithDouble(this.h, (C.double)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithFloat(i float32) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithFloat(this.h, (C.float)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString2(date *QDate, formatStr string) string {
	formatStr_ms := miqt_strdupg(formatStr)
	defer C.free(formatStr_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToString2(this.h, date.cPointer(), (*C.struct_miqt_string)(formatStr_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString3(time *QTime, formatStr string) string {
	formatStr_ms := miqt_strdupg(formatStr)
	defer C.free(formatStr_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToString3(this.h, time.cPointer(), (*C.struct_miqt_string)(formatStr_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString4(dateTime *QDateTime, format string) string {
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToString4(this.h, dateTime.cPointer(), (*C.struct_miqt_string)(format_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithDate(date *QDate) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithDate(this.h, date.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithTime(time *QTime) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithTime(this.h, time.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToStringWithDateTime(dateTime *QDateTime) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToStringWithDateTime(this.h, dateTime.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString9(date *QDate, format QLocale__FormatType, cal QCalendar) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString9(this.h, date.cPointer(), (C.uintptr_t)(format), cal.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString10(dateTime *QDateTime, format QLocale__FormatType, cal QCalendar) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString10(this.h, dateTime.cPointer(), (C.uintptr_t)(format), cal.cPointer())
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) DateFormat() string {
	var _ms *C.struct_miqt_string = C.QLocale_DateFormat(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) TimeFormat() string {
	var _ms *C.struct_miqt_string = C.QLocale_TimeFormat(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) DateTimeFormat() string {
	var _ms *C.struct_miqt_string = C.QLocale_DateTimeFormat(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToDate(stringVal string) *QDate {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToDate(this.h, (*C.struct_miqt_string)(stringVal_ms))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToTime(stringVal string) *QTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToTime(this.h, (*C.struct_miqt_string)(stringVal_ms))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime(stringVal string) *QDateTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToDateTime(this.h, (*C.struct_miqt_string)(stringVal_ms))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDate2(stringVal string, format string) *QDate {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QLocale_ToDate2(this.h, (*C.struct_miqt_string)(stringVal_ms), (*C.struct_miqt_string)(format_ms))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToTime2(stringVal string, format string) *QTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QLocale_ToTime2(this.h, (*C.struct_miqt_string)(stringVal_ms), (*C.struct_miqt_string)(format_ms))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime2(stringVal string, format string) *QDateTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QLocale_ToDateTime2(this.h, (*C.struct_miqt_string)(stringVal_ms), (*C.struct_miqt_string)(format_ms))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDate3(stringVal string, format QLocale__FormatType, cal QCalendar) *QDate {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToDate3(this.h, (*C.struct_miqt_string)(stringVal_ms), (C.uintptr_t)(format), cal.cPointer())
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime3(stringVal string, format QLocale__FormatType, cal QCalendar) *QDateTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToDateTime3(this.h, (*C.struct_miqt_string)(stringVal_ms), (C.uintptr_t)(format), cal.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDate4(stringVal string, format string, cal QCalendar) *QDate {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QLocale_ToDate4(this.h, (*C.struct_miqt_string)(stringVal_ms), (*C.struct_miqt_string)(format_ms), cal.cPointer())
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime4(stringVal string, format string, cal QCalendar) *QDateTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QLocale_ToDateTime4(this.h, (*C.struct_miqt_string)(stringVal_ms), (*C.struct_miqt_string)(format_ms), cal.cPointer())
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToTime3(stringVal string, format QLocale__FormatType, cal QCalendar) *QTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToTime3(this.h, (*C.struct_miqt_string)(stringVal_ms), (C.uintptr_t)(format), cal.cPointer())
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToTime4(stringVal string, format string, cal QCalendar) *QTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	format_ms := miqt_strdupg(format)
	defer C.free(format_ms)
	_ret := C.QLocale_ToTime4(this.h, (*C.struct_miqt_string)(stringVal_ms), (*C.struct_miqt_string)(format_ms), cal.cPointer())
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) DecimalPoint() *QChar {
	_ret := C.QLocale_DecimalPoint(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) GroupSeparator() *QChar {
	_ret := C.QLocale_GroupSeparator(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) Percent() *QChar {
	_ret := C.QLocale_Percent(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ZeroDigit() *QChar {
	_ret := C.QLocale_ZeroDigit(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) NegativeSign() *QChar {
	_ret := C.QLocale_NegativeSign(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) PositiveSign() *QChar {
	_ret := C.QLocale_PositiveSign(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) Exponential() *QChar {
	_ret := C.QLocale_Exponential(this.h)
	_goptr := newQChar(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) MonthName(param1 int) string {
	var _ms *C.struct_miqt_string = C.QLocale_MonthName(this.h, (C.int)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) StandaloneMonthName(param1 int) string {
	var _ms *C.struct_miqt_string = C.QLocale_StandaloneMonthName(this.h, (C.int)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) DayName(param1 int) string {
	var _ms *C.struct_miqt_string = C.QLocale_DayName(this.h, (C.int)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) StandaloneDayName(param1 int) string {
	var _ms *C.struct_miqt_string = C.QLocale_StandaloneDayName(this.h, (C.int)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) FirstDayOfWeek() DayOfWeek {
	return (DayOfWeek)(C.QLocale_FirstDayOfWeek(this.h))
}

func (this *QLocale) Weekdays() []DayOfWeek {
	var _ma *C.struct_miqt_array = C.QLocale_Weekdays(this.h)
	_ret := make([]DayOfWeek, int(_ma.len))
	_outCast := (*[0xffff]C.uintptr_t)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (DayOfWeek)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QLocale) AmText() string {
	var _ms *C.struct_miqt_string = C.QLocale_AmText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) PmText() string {
	var _ms *C.struct_miqt_string = C.QLocale_PmText(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) MeasurementSystem() QLocale__MeasurementSystem {
	return (QLocale__MeasurementSystem)(C.QLocale_MeasurementSystem(this.h))
}

func (this *QLocale) Collation() *QLocale {
	_ret := C.QLocale_Collation(this.h)
	_goptr := newQLocale(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) TextDirection() LayoutDirection {
	return (LayoutDirection)(C.QLocale_TextDirection(this.h))
}

func (this *QLocale) ToUpper(str string) string {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToUpper(this.h, (*C.struct_miqt_string)(str_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToLower(str string) string {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToLower(this.h, (*C.struct_miqt_string)(str_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) CurrencySymbol() string {
	var _ms *C.struct_miqt_string = C.QLocale_CurrencySymbol(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString(param1 int64) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString(this.h, (C.longlong)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithQulonglong(param1 uint64) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyStringWithQulonglong(this.h, (C.ulonglong)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithShort(param1 int16) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyStringWithShort(this.h, (C.int16_t)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithUshort(param1 uint16) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyStringWithUshort(this.h, (C.uint16_t)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithInt(param1 int) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyStringWithInt(this.h, (C.int)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithUint(param1 uint) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyStringWithUint(this.h, (C.uint)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithDouble(param1 float64) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyStringWithDouble(this.h, (C.double)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString2(param1 float64, symbol string, precision int) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString2(this.h, (C.double)(param1), (*C.struct_miqt_string)(symbol_ms), (C.int)(precision))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyStringWithFloat(i float32) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyStringWithFloat(this.h, (C.float)(i))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString3(i float32, symbol string, precision int) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString3(this.h, (C.float)(i), (*C.struct_miqt_string)(symbol_ms), (C.int)(precision))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) FormattedDataSize(bytes int64) string {
	var _ms *C.struct_miqt_string = C.QLocale_FormattedDataSize(this.h, (C.longlong)(bytes))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) FormattedDataSizeWithBytes(bytes int64) string {
	var _ms *C.struct_miqt_string = C.QLocale_FormattedDataSizeWithBytes(this.h, (C.longlong)(bytes))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) UiLanguages() []string {
	var _ma *C.struct_miqt_array = C.QLocale_UiLanguages(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QLocale) OperatorEqual(other *QLocale) bool {
	return (bool)(C.QLocale_OperatorEqual(this.h, other.cPointer()))
}

func (this *QLocale) OperatorNotEqual(other *QLocale) bool {
	return (bool)(C.QLocale_OperatorNotEqual(this.h, other.cPointer()))
}

func QLocale_LanguageToString(language QLocale__Language) string {
	var _ms *C.struct_miqt_string = C.QLocale_LanguageToString((C.uintptr_t)(language))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLocale_CountryToString(country QLocale__Country) string {
	var _ms *C.struct_miqt_string = C.QLocale_CountryToString((C.uintptr_t)(country))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLocale_ScriptToString(script QLocale__Script) string {
	var _ms *C.struct_miqt_string = C.QLocale_ScriptToString((C.uintptr_t)(script))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QLocale_SetDefault(locale *QLocale) {
	C.QLocale_SetDefault(locale.cPointer())
}

func QLocale_C() *QLocale {
	_ret := C.QLocale_C()
	_goptr := newQLocale(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLocale_System() *QLocale {
	_ret := C.QLocale_System()
	_goptr := newQLocale(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLocale_MatchingLocales(language QLocale__Language, script QLocale__Script, country QLocale__Country) []QLocale {
	var _ma *C.struct_miqt_array = C.QLocale_MatchingLocales((C.uintptr_t)(language), (C.uintptr_t)(script), (C.uintptr_t)(country))
	_ret := make([]QLocale, int(_ma.len))
	_outCast := (*[0xffff]*C.QLocale)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQLocale(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func QLocale_CountriesForLanguage(lang QLocale__Language) []QLocale__Country {
	var _ma *C.struct_miqt_array = C.QLocale_CountriesForLanguage((C.uintptr_t)(lang))
	_ret := make([]QLocale__Country, int(_ma.len))
	_outCast := (*[0xffff]C.uintptr_t)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (QLocale__Country)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QLocale) SetNumberOptions(options int) {
	C.QLocale_SetNumberOptions(this.h, (C.int)(options))
}

func (this *QLocale) NumberOptions() int {
	return (int)(C.QLocale_NumberOptions(this.h))
}

func (this *QLocale) QuoteString(str string) string {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	var _ms *C.struct_miqt_string = C.QLocale_QuoteString(this.h, (*C.struct_miqt_string)(str_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) CreateSeparatedList(strl []string) string {
	// For the C ABI, malloc a C array of raw pointers
	strl_CArray := (*[0xffff]*C.struct_miqt_string)(C.malloc(C.size_t(8 * len(strl))))
	defer C.free(unsafe.Pointer(strl_CArray))
	for i := range strl {
		strl_i_ms := miqt_strdupg(strl[i])
		defer C.free(strl_i_ms)
		strl_CArray[i] = (*C.struct_miqt_string)(strl_i_ms)
	}
	strl_ma := &C.struct_miqt_array{len: C.size_t(len(strl)), data: unsafe.Pointer(strl_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(strl_ma))
	var _ms *C.struct_miqt_string = C.QLocale_CreateSeparatedList(this.h, strl_ma)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToShort2(s string, ok *bool) int16 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (int16)(C.QLocale_ToShort2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToUShort2(s string, ok *bool) uint16 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (uint16)(C.QLocale_ToUShort2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToInt2(s string, ok *bool) int {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (int)(C.QLocale_ToInt2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToUInt2(s string, ok *bool) uint {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (uint)(C.QLocale_ToUInt2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToLong2(s string, ok *bool) int64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (int64)(C.QLocale_ToLong2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToULong2(s string, ok *bool) uint64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (uint64)(C.QLocale_ToULong2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToLongLong2(s string, ok *bool) int64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (int64)(C.QLocale_ToLongLong2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToULongLong2(s string, ok *bool) uint64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (uint64)(C.QLocale_ToULongLong2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToFloat2(s string, ok *bool) float32 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (float32)(C.QLocale_ToFloat2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToDouble2(s string, ok *bool) float64 {
	s_ms := miqt_strdupg(s)
	defer C.free(s_ms)
	return (float64)(C.QLocale_ToDouble2(this.h, (*C.struct_miqt_string)(s_ms), (*C.bool)(unsafe.Pointer(ok))))
}

func (this *QLocale) ToString22(i float64, f byte) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString22(this.h, (C.double)(i), (C.char)(f))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString32(i float64, f byte, prec int) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString32(this.h, (C.double)(i), (C.char)(f), (C.int)(prec))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString23(i float32, f byte) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString23(this.h, (C.float)(i), (C.char)(f))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString33(i float32, f byte, prec int) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString33(this.h, (C.float)(i), (C.char)(f), (C.int)(prec))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString24(date *QDate, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString24(this.h, date.cPointer(), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString25(time *QTime, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString25(this.h, time.cPointer(), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToString26(dateTime *QDateTime, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_ToString26(this.h, dateTime.cPointer(), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) DateFormat1(format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_DateFormat1(this.h, (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) TimeFormat1(format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_TimeFormat1(this.h, (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) DateTimeFormat1(format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_DateTimeFormat1(this.h, (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToDate22(stringVal string, param2 QLocale__FormatType) *QDate {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToDate22(this.h, (*C.struct_miqt_string)(stringVal_ms), (C.uintptr_t)(param2))
	_goptr := newQDate(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToTime22(stringVal string, param2 QLocale__FormatType) *QTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToTime22(this.h, (*C.struct_miqt_string)(stringVal_ms), (C.uintptr_t)(param2))
	_goptr := newQTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) ToDateTime22(stringVal string, format QLocale__FormatType) *QDateTime {
	stringVal_ms := miqt_strdupg(stringVal)
	defer C.free(stringVal_ms)
	_ret := C.QLocale_ToDateTime22(this.h, (*C.struct_miqt_string)(stringVal_ms), (C.uintptr_t)(format))
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLocale) MonthName2(param1 int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_MonthName2(this.h, (C.int)(param1), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) StandaloneMonthName2(param1 int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_StandaloneMonthName2(this.h, (C.int)(param1), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) DayName2(param1 int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_DayName2(this.h, (C.int)(param1), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) StandaloneDayName2(param1 int, format QLocale__FormatType) string {
	var _ms *C.struct_miqt_string = C.QLocale_StandaloneDayName2(this.h, (C.int)(param1), (C.uintptr_t)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) CurrencySymbol1(param1 QLocale__CurrencySymbolFormat) string {
	var _ms *C.struct_miqt_string = C.QLocale_CurrencySymbol1(this.h, (C.uintptr_t)(param1))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString22(param1 int64, symbol string) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString22(this.h, (C.longlong)(param1), (*C.struct_miqt_string)(symbol_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString23(param1 uint64, symbol string) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString23(this.h, (C.ulonglong)(param1), (*C.struct_miqt_string)(symbol_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString24(param1 int16, symbol string) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString24(this.h, (C.int16_t)(param1), (*C.struct_miqt_string)(symbol_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString25(param1 uint16, symbol string) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString25(this.h, (C.uint16_t)(param1), (*C.struct_miqt_string)(symbol_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString26(param1 int, symbol string) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString26(this.h, (C.int)(param1), (*C.struct_miqt_string)(symbol_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString27(param1 uint, symbol string) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString27(this.h, (C.uint)(param1), (*C.struct_miqt_string)(symbol_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString28(param1 float64, symbol string) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString28(this.h, (C.double)(param1), (*C.struct_miqt_string)(symbol_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) ToCurrencyString29(i float32, symbol string) string {
	symbol_ms := miqt_strdupg(symbol)
	defer C.free(symbol_ms)
	var _ms *C.struct_miqt_string = C.QLocale_ToCurrencyString29(this.h, (C.float)(i), (*C.struct_miqt_string)(symbol_ms))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) FormattedDataSize2(bytes int64, precision int) string {
	var _ms *C.struct_miqt_string = C.QLocale_FormattedDataSize2(this.h, (C.longlong)(bytes), (C.int)(precision))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) FormattedDataSize3(bytes int64, precision int, format int) string {
	var _ms *C.struct_miqt_string = C.QLocale_FormattedDataSize3(this.h, (C.longlong)(bytes), (C.int)(precision), (C.int)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) FormattedDataSize22(bytes int64, precision int) string {
	var _ms *C.struct_miqt_string = C.QLocale_FormattedDataSize22(this.h, (C.longlong)(bytes), (C.int)(precision))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) FormattedDataSize32(bytes int64, precision int, format int) string {
	var _ms *C.struct_miqt_string = C.QLocale_FormattedDataSize32(this.h, (C.longlong)(bytes), (C.int)(precision), (C.int)(format))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QLocale) QuoteString2(str string, style QLocale__QuotationStyle) string {
	str_ms := miqt_strdupg(str)
	defer C.free(str_ms)
	var _ms *C.struct_miqt_string = C.QLocale_QuoteString2(this.h, (*C.struct_miqt_string)(str_ms), (C.uintptr_t)(style))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QLocale) Delete() {
	C.QLocale_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLocale) GoGC() {
	runtime.SetFinalizer(this, func(this *QLocale) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
