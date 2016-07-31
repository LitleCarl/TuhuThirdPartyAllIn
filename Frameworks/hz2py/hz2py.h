//
//  hz2py.h
//  yunshi
//
//  Created by kiri on 11-11-28.
//  Copyright 2011 Rayclear Technology(Beijing) Co.,Ltd. All rights reserved.
//

#ifndef __HZ2PY_H__
#define __HZ2PY_H__

// return is_pinyin
int unichar2Py(unichar c, char* out, int *outlen);
char getpychar(const char *gb2312, int len);

int isHanziUnicodeCharacter(unichar c);
int isHanziGBKCharacter(unichar c);

#endif