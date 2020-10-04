#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <unistd.h>
void encode(FILE *, FILE *);
void decode(FILE *, FILE *);
void display(FILE *);

int main()
{
    FILE *sf, *df;
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    /*Source File*/
    sf = fopen("file.txt", "r");
    /*Destination File*/
    df = fopen("target.txt", "w");

    /*Displaying decoded file before encoding*/
    display(sf);

    /*Encoding file*/
    encode(sf, df);
    /*Displaying encoded file after encoding*/
    display(df);

    /*Decoding file*/
    decode(df, sf);
    /*Displaying file after decoding*/
    display(sf);

    _getch();
    return 0;
}

void encode(FILE *sf, FILE *df)
{
    char ch;
    while (1)
    {
        ch = fgetc(sf);
        if (ch == EOF)
            break;
        if (isalpha(ch) || ch == ' ' || ch == '\n')
        {
            switch (ch)
            {
            case '\n':
                fputc('@', df);
                break;
            case 'a':
                fputc('0', df);
            case 'A':
                fputc('!', df);
                break;
            case 'b':
                fputc('0', df);
            case 'B':
                fputc('#', df);
                break;
            case 'c':
                fputc('0', df);
            case 'C':
                fputc('$', df);
                break;
            case 'd':
                fputc('0', df);
            case 'D':
                fputc('%', df);
                break;
            case 'e':
                fputc('0', df);
            case 'E':
                fputc('&', df);
                break;
            case 'f':
                fputc('0', df);
            case 'F':
                fputc('*', df);
                break;
            case 'g':
                fputc('0', df);
            case 'G':
                fputc('(', df);
                break;
            case 'h':
                fputc('0', df);
            case 'H':
                fputc(')', df);
                break;
            case 'i':
                fputc('0', df);
            case 'I':
                putc('+', df);
                break;
            case 'j':
                fputc('0', df);
            case 'J':
                fputc('/', df);
                break;
            case 'k':
                fputc('0', df);
            case 'K':
                fputc('{', df);
                break;
            case 'l':
                fputc('0', df);
            case 'L':
                fputc('}', df);
                break;
            case 'm':
                fputc('0', df);
            case 'M':
                fputc(';', df);
                break;
            case 'n':
                fputc('0', df);
            case 'N':
                fputc(':', df);
                break;
            case 'o':
                fputc('0', df);
            case 'O':
                fputc('[', df);
                break;
            case 'p':
                fputc('0', df);
            case 'P':
                fputc(']', df);
                break;
            case 'q':
                fputc('0', df);
            case 'Q':
                fputc('"', df);
                break;
            case 'r':
                fputc('0', df);
            case 'R':
                fputc('`', df);
                break;
            case 's':
                fputc('0', df);
            case 'S':
                fputc('\\', df);
                break;
            case 't':
                fputc('0', df);
            case 'T':
                fputc('|', df);
                break;
            case 'u':
                fputc('0', df);
            case 'U':
                fputc('=', df);
                break;
            case 'v':
                fputc('0', df);
            case 'V':
                fputc('-', df);
                break;
            case 'w':
                fputc('0', df);
            case 'W':
                fputc('_', df);
            case 'x':
                fputc('0', df);
            case 'X':
                fputc('<', df);
                break;
            case 'y':
                fputc('0', df);
            case 'Y':
                fputc('^', df);
                break;
            case 'z':
                fputc('0', df);
            case 'Z':
                fputc('?', df);
                break;
            case ' ':
                fputc('1', df);
                break;
            }
        }
        else
            fputc(ch, df);
    }
}

void decode(FILE *ef, FILE *df)
{
    char ch;
    while (1)
    {
        ch = fgetc(df);
        if (ch == EOF)
            break;
        switch (ch)
        {
        case '@':
            fputc('\n', ef);
            break;
        case '0':
            ch = fgetc(df);
            switch (ch)
            {
            case '!':
                fputc('a', ef);
                break;
            case '#':
                fputc('b', ef);
                break;
            case '$':
                fputc('c', ef);
                break;
            case '%':
                fputc('d', ef);
                break;
            case '&':
                fputc('e', ef);
                break;
            case '*':
                fputc('f', ef);
                break;
            case '(':
                fputc('g', ef);
                break;
            case ')':
                fputc('h', ef);
                break;
            case '+':
                fputc('i', ef);
                break;
            case '/':
                fputc('j', ef);
                break;
            case '{':
                fputc('k', ef);
                break;
            case '}':
                fputc('l', ef);
                break;
            case ';':
                fputc('m', ef);
                break;
            case ':':
                fputc('n', ef);
                break;
            case '[':
                fputc('o', ef);
                break;
            case ']':
                fputc('p', ef);
                break;
            case '"':
                fputc('q', ef);
                break;
            case '`':
                fputc('r', ef);
                break;
            case '\\':
                fputc('s', ef);
                break;
            case '|':
                fputc('t', ef);
                break;
            case '=':
                fputc('u', ef);
                break;
            case '-':
                fputc('v', ef);
                break;
            case '_':
                fputc('w', ef);
                break;
            case '<':
                fputc('x', ef);
                break;
            case '^':
                fputc('y', ef);
                break;
            case '?':
                fputc('z', ef);
                break;
            }
            break;
        case '!':
            fputc('A', ef);
            break;
        case '#':
            fputc('B', ef);
            break;
        case '$':
            fputc('C', ef);
            break;
        case '%':
            fputc('D', ef);
            break;
        case '&':
            fputc('E', ef);
            break;
        case '*':
            fputc('F', ef);
            break;
        case '(':
            fputc('G', ef);
            break;
        case ')':
            fputc('H', ef);
            break;
        case '+':
            putc('I', ef);
            break;
        case '/':
            fputc('J', ef);
            break;
        case '{':
            fputc('K', ef);
            break;
        case '}':
            fputc('L', ef);
            break;
        case ';':
            fputc('M', ef);
            break;
        case ':':
            fputc('N', ef);
            break;
        case '[':
            fputc('O', ef);
            break;
        case ']':
            fputc('P', ef);
            break;
        case '"':
            fputc('Q', ef);
            break;
        case '`':
            fputc('R', ef);
            break;
        case '\\':
            fputc('S', ef);
            break;
        case '|':
            fputc('T', ef);
            break;
        case '=':
            fputc('U', ef);
            break;
        case '-':
            fputc('V', ef);
            break;
        case '_':
            fputc('W', ef);
        case '<':
            fputc('X', ef);
            break;
        case '^':
            fputc('Y', ef);
            break;
        case '?':
            fputc('Z', ef);
            break;
        case '1':
            fputc(' ', ef);
            break;
        default:
            fputc(ch, ef);
        }
    }
}

void display(FILE *fp)
{
    char str[50];
    while (fgets(str, 49, fp) != NULL)
        printf("%s", str);
    puts("\n\n");
    _getch();
}