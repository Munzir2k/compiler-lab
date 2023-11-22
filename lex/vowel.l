%{
    int vowel=0,consonant=0;
%}
%%
[aeiouAEIOU] {vowel++;}
[a-zA-Z] {consonant++;}
%%

int yywrap() {}
int main()
{
    printf("Enter text: ");
    yylex();
    printf("Vowels: %d",vowel);
    printf("\nConsonant: %d",consonant);
}