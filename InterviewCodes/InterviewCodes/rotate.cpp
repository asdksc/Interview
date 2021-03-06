/****************************************************************************
**
** Copyright (C) 2013 JayLi
** All rights reserved.
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
****************************************************************************/

// commit test 2

// Candidate 2
void reverse(char *str)
{
	char *end = str;

	while (*end++){}

	end -= 2;

	while (str < end)
	{
		char tmp = *str;
		*str++ = *end;
		*end-- = tmp;
	}
}
