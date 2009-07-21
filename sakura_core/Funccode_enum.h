#pragma once

//このファイルは HeaderMake により Funccode_x.hsrc から生成されたファイルです。
//直接編集しないでください。

enum EFunctionCode{
	F_INVALID = -1,
	F_DEFAULT = 0,
	F_0 = 0,
	F_DISABLE = 0,
	F_SEPARATOR = 1,
	F_MENU_FIRST = 30000,
	F_FILENEW = 30101,
	F_FILEOPEN = 30102,
	F_FILESAVE = 30103,
	F_FILESAVEAS_DIALOG = 30104,
	F_FILESAVEAS = 30106,
	F_FILECLOSE = 30105,
	F_FILECLOSE_OPEN = 30107,
	F_FILEOPEN_DROPDOWN = 30108,
	F_FILESAVECLOSE = 30109,
	F_FILE_REOPEN_SJIS = 30111,
	F_FILE_REOPEN_JIS = 30112,
	F_FILE_REOPEN_EUC = 30113,
	F_FILE_REOPEN_UNICODE = 30114,
	F_FILE_REOPEN_UTF8 = 30115,
	F_FILE_REOPEN_UTF7 = 30116,
	F_FILE_REOPEN_UNICODEBE = 30117,
	F_FILE_REOPEN_CESU8 = 30118,
	F_FILE_REOPEN = 30119,
	F_FILESAVEALL = 30120,
	F_FILESAVE_QUIET = 30121,
	F_PRINT = 30150,
	F_PRINT_PREVIEW = 30151,
	F_PRINT_PAGESETUP = 30152,
	F_OPEN_HfromtoC = 30162,
	F_ACTIVATE_SQLPLUS = 30170,
	F_PLSQL_COMPILE_ON_SQLPLUS = 30171,
	F_BROWSE = 30180,
	F_VIEWMODE = 30185,
	F_PROPERTY_FILE = 30190,
	F_EXITALLEDITORS = 30194,
	F_EXITALL = 30195,
	F_NOWOPENFILE = 30197,
	F_RECENTFILE = 30198,
	F_RECENTFOLDER = 30199,
	F_WCHAR = 30200,
	F_IME_CHAR = 30201,
	F_UNDO = 30210,
	F_REDO = 30211,
	F_DELETE = 30221,
	F_DELETE_BACK = 30222,
	F_WordDeleteToStart = 30230,
	F_WordDeleteToEnd = 30231,
	F_WordCut = 30232,
	F_WordDelete = 30233,
	F_LineCutToStart = 30240,
	F_LineCutToEnd = 30241,
	F_LineDeleteToStart = 30242,
	F_LineDeleteToEnd = 30243,
	F_CUT_LINE = 30244,
	F_DELETE_LINE = 30245,
	F_DUPLICATELINE = 30250,
	F_INDENT_TAB = 30260,
	F_UNINDENT_TAB = 30261,
	F_INDENT_SPACE = 30262,
	F_UNINDENT_SPACE = 30263,
	F_LTRIM = 30280,
	F_RTRIM = 30281,
	F_SORT_ASC = 30282,
	F_SORT_DESC = 30283,
	F_MERGE = 30284,
	F_RECONVERT = 30285,
	F_UP = 30311,
	F_DOWN = 30312,
	F_LEFT = 30313,
	F_RIGHT = 30314,
	F_UP2 = 30315,
	F_DOWN2 = 30316,
	F_WORDLEFT = 30320,
	F_WORDRIGHT = 30321,
	F_GOLINETOP = 30332,
	F_GOLINEEND = 30333,
	F_HalfPageUp = 30340,
	F_HalfPageDown = 30341,
	F_1PageUp = 30342,
	F_1PageDown = 30343,
	F_GOFILETOP = 30350,
	F_GOFILEEND = 30351,
	F_CURLINECENTER = 30360,
	F_JUMPHIST_PREV = 30370,
	F_JUMPHIST_NEXT = 30371,
	F_JUMPHIST_SET = 30372,
	F_WndScrollDown = 30380,
	F_WndScrollUp = 30381,
	F_GONEXTPARAGRAPH = 30382,
	F_GOPREVPARAGRAPH = 30383,
	F_SELECTWORD = 30400,
	F_SELECTALL = 30401,
	F_SELECTLINE = 30403,
	F_BEGIN_SEL = 30410,
	F_UP_SEL = 30411,
	F_DOWN_SEL = 30412,
	F_LEFT_SEL = 30413,
	F_RIGHT_SEL = 30414,
	F_UP2_SEL = 30415,
	F_DOWN2_SEL = 30416,
	F_WORDLEFT_SEL = 30420,
	F_WORDRIGHT_SEL = 30421,
	F_GOLINETOP_SEL = 30432,
	F_GOLINEEND_SEL = 30433,
	F_HalfPageUp_Sel = 30440,
	F_HalfPageDown_Sel = 30441,
	F_1PageUp_Sel = 30442,
	F_1PageDown_Sel = 30443,
	F_GOFILETOP_SEL = 30450,
	F_GOFILEEND_SEL = 30451,
	F_GONEXTPARAGRAPH_SEL = 30482,
	F_GOPREVPARAGRAPH_SEL = 30483,
	F_BEGIN_BOX = 30510,
	F_CUT = 30601,
	F_COPY = 30602,
	F_COPY_ADDCRLF = 30608,
	F_COPY_CRLF = 30603,
	F_PASTE = 30604,
	F_PASTEBOX = 30605,
	F_INSTEXT_W = 30606,
	F_ADDTAIL_W = 30607,
	F_COPYLINES = 30610,
	F_COPYLINESASPASSAGE = 30611,
	F_COPYLINESWITHLINENUMBER = 30612,
	F_COPYPATH = 30620,
	F_COPYTAG = 30621,
	F_COPYFNAME = 30622,
	F_CREATEKEYBINDLIST = 30630,
	F_INS_DATE = 30790,
	F_INS_TIME = 30791,
	F_CTRL_CODE_DIALOG = 30792,
	F_TOLOWER = 30800,
	F_TOUPPER = 30801,
	F_TOHANKAKU = 30810,
	F_TOHANKATA = 30817,
	F_TOZENKAKUKATA = 30811,
	F_TOZENKAKUHIRA = 30812,
	F_HANKATATOZENKATA = 30813,
	F_HANKATATOZENHIRA = 30814,
	F_TOZENEI = 30815,
	F_TOHANEI = 30816,
	F_TABTOSPACE = 30830,
	F_SPACETOTAB = 30831,
	F_CODECNV_AUTO2SJIS = 30850,
	F_CODECNV_EMAIL = 30851,
	F_CODECNV_EUC2SJIS = 30852,
	F_CODECNV_UNICODE2SJIS = 30853,
	F_CODECNV_UNICODEBE2SJIS = 30856,
	F_CODECNV_UTF82SJIS = 30854,
	F_CODECNV_UTF72SJIS = 30855,
	F_CODECNV_SJIS2JIS = 30860,
	F_CODECNV_SJIS2EUC = 30861,
	F_CODECNV_SJIS2UTF8 = 30862,
	F_CODECNV_SJIS2UTF7 = 30863,
	F_BASE64DECODE = 30870,
	F_UUDECODE = 30880,
	F_SEARCH_DIALOG = 30901,
	F_SEARCH_NEXT = 30902,
	F_SEARCH_PREV = 30903,
	F_REPLACE_DIALOG = 30904,
	F_REPLACE = 30906,
	F_REPLACE_ALL = 30907,
	F_SEARCH_CLEARMARK = 30905,
	F_JUMP_SRCHSTARTPOS = 30909,
	F_SEARCH_BOX = 30908,
	F_GREP_DIALOG = 30910,
	F_GREP = 30911,
	F_JUMP_DIALOG = 30920,
	F_JUMP = 30921,
	F_OUTLINE = 30930,
	F_OUTLINE_TOGGLE = 30931,
	F_TAGJUMP = 30940,
	F_TAGJUMPBACK = 30941,
	F_TAGJUMP_LIST = 30942,
	F_TAGS_MAKE = 30943,
	F_DIRECT_TAGJUMP = 30944,
	F_TAGJUMP_CLOSE = 30945,
	F_TAGJUMP_KEYWORD = 30946,
	F_COMPARE = 30950,
	F_BRACKETPAIR = 30960,
	F_BOOKMARK_SET = 30970,
	F_BOOKMARK_NEXT = 30971,
	F_BOOKMARK_PREV = 30972,
	F_BOOKMARK_RESET = 30973,
	F_BOOKMARK_VIEW = 30974,
	F_BOOKMARK_PATTERN = 30975,
	F_DIFF_DIALOG = 30976,
	F_DIFF = 30977,
	F_DIFF_NEXT = 30978,
	F_DIFF_PREV = 30979,
	F_DIFF_RESET = 30980,
	F_ISEARCH_NEXT = 30981,
	F_ISEARCH_PREV = 30982,
	F_ISEARCH_REGEXP_NEXT = 30983,
	F_ISEARCH_REGEXP_PREV = 30984,
	F_ISEARCH_MIGEMO_NEXT = 30985,
	F_ISEARCH_MIGEMO_PREV = 30986,
	F_CHGMOD_INS = 31001,
	F_CHGMOD_EOL_CRLF = 31081,
	F_CHGMOD_EOL_LF = 31082,
	F_CHGMOD_EOL_CR = 31083,
	F_CANCEL_MODE = 31099,
	F_SHOWTOOLBAR = 31100,
	F_SHOWFUNCKEY = 31101,
	F_SHOWSTATUSBAR = 31102,
	F_SHOWTAB = 31103,
	F_TYPE_LIST = 31110,
	F_OPTION_TYPE = 31111,
	F_OPTION = 31112,
	F_FAVORITE = 31113,
	F_FONT = 31120,
	F_WRAPWINDOWWIDTH = 31140,
	F_TMPWRAPNOWRAP = 31141,
	F_TMPWRAPSETTING = 31142,
	F_TMPWRAPWINDOW = 31143,
	F_SELECT_COUNT_MODE = 31144,
	F_TYPE_SCREEN = 31115,
	F_TYPE_COLOR = 31116,
	F_TYPE_HELPER = 31117,
	F_TYPE_REGEX_KEYWORD = 31118,
	F_TYPE_KEYHELP = 31119,
	F_OPTION_GENERAL = 32000,
	F_OPTION_WINDOW = 32001,
	F_OPTION_EDIT = 32002,
	F_OPTION_FILE = 32003,
	F_OPTION_BACKUP = 32004,
	F_OPTION_FORMAT = 32005,
	F_OPTION_GREP = 32007,
	F_OPTION_KEYBIND = 32008,
	F_OPTION_CUSTMENU = 32009,
	F_OPTION_TOOLBAR = 32010,
	F_OPTION_KEYWORD = 32011,
	F_OPTION_HELPER = 32012,
	F_OPTION_MACRO = 32013,
	F_OPTION_FNAME = 32014,
	F_OPTION_TAB = 32015,
	F_OPTION_STATUSBAR = 32016,
	F_RECKEYMACRO = 31250,
	F_SAVEKEYMACRO = 31251,
	F_LOADKEYMACRO = 31252,
	F_EXECKEYMACRO = 31253,
	F_EXECEXTMACRO = 31254,
	F_EXECMD_DIALOG = 31270,
	F_EXECMD = 31271,
	F_SPLIT_V = 31310,
	F_SPLIT_H = 31311,
	F_SPLIT_VH = 31312,
	F_WINCLOSE = 31320,
	F_WIN_CLOSEALL = 31321,
	F_CASCADE = 31330,
	F_TILE_V = 31331,
	F_TILE_H = 31332,
	F_BIND_WINDOW = 31333,
	F_TOPMOST = 31334,
	F_NEXTWINDOW = 31340,
	F_PREVWINDOW = 31341,
	F_WINLIST = 31336,
	F_MAXIMIZE_V = 31350,
	F_MINIMIZE_ALL = 31351,
	F_MAXIMIZE_H = 31352,
	F_REDRAW = 31360,
	F_WIN_OUTPUT = 31370,
	F_GROUPCLOSE = 31380,
	F_NEXTGROUP = 31381,
	F_PREVGROUP = 31382,
	F_TAB_MOVERIGHT = 31383,
	F_TAB_MOVELEFT = 31384,
	F_TAB_SEPARATE = 31385,
	F_TAB_JOINTNEXT = 31386,
	F_TAB_JOINTPREV = 31387,
	F_TAB_CLOSEOTHER = 31388,
	F_TAB_CLOSELEFT = 31389,
	F_TAB_CLOSERIGHT = 31390,
	F_HOKAN = 31430,
	F_TOGGLE_KEY_SEARCH = 31431,
	F_HELP_CONTENTS = 31440,
	F_HELP_SEARCH = 31441,
	F_MENU_ALLFUNC = 31445,
	F_EXTHELP1 = 31450,
	F_EXTHTMLHELP = 31451,
	F_ABOUT = 31455,
	F_USERMACRO_0 = 31600,
	F_MENU_RBUTTON = 31580,
	F_CUSTMENU_1 = 31501,
	F_CUSTMENU_2 = 31502,
	F_CUSTMENU_3 = 31503,
	F_CUSTMENU_4 = 31504,
	F_CUSTMENU_5 = 31505,
	F_CUSTMENU_6 = 31506,
	F_CUSTMENU_7 = 31507,
	F_CUSTMENU_8 = 31508,
	F_CUSTMENU_9 = 31509,
	F_CUSTMENU_10 = 31510,
	F_CUSTMENU_11 = 31511,
	F_CUSTMENU_12 = 31512,
	F_CUSTMENU_13 = 31513,
	F_CUSTMENU_14 = 31514,
	F_CUSTMENU_15 = 31515,
	F_CUSTMENU_16 = 31516,
	F_CUSTMENU_17 = 31517,
	F_CUSTMENU_18 = 31518,
	F_CUSTMENU_19 = 31519,
	F_CUSTMENU_20 = 31520,
	F_CUSTMENU_21 = 31521,
	F_CUSTMENU_22 = 31522,
	F_CUSTMENU_23 = 31523,
	F_CUSTMENU_24 = 31524,
	F_CUSTMENU_BASE = 31500,
	F_MENU_NOT_USED_FIRST = 32768,
	F_CHGMOD_EOL = 32800,
	F_SET_QUOTESTRING = 32801,
	F_TRACEOUT = 32802,
	F_PUTFILE = 32803,
	F_INSFILE = 32804,
	F_TEXTWRAPMETHOD = 32805,
	F_FUNCTION_FIRST = 40000,
	F_GETFILENAME = 40001,
	F_GETSELECTED = 40002,
	F_EXPANDPARAMETER = 40003,
	F_GETLINESTR = 40004,
	F_GETLINECOUNT = 40005,
	F_CHGTABWIDTH = 40006,
	F_ISTEXTSELECTED = 40007,
	F_GETSELLINEFROM = 40008,
	F_GETSELCOLMFROM = 40009,
	F_GETSELLINETO = 40010,
	F_GETSELCOLMTO = 40011,
	F_ISINSMODE = 40012,
	F_GETCHARCODE = 40013,
	F_GETLINECODE = 40014,
	F_ISPOSSIBLEUNDO = 40015,
	F_ISPOSSIBLEREDO = 40016,
	F_CHGWRAPCOLM = 40017,
	F_ISEARCH_ADD_CHAR = 0x10001,
	F_ISEARCH_ADD_STR = 0x10002,
	F_ISEARCH_DEL_BACK = 0x10003,
};
