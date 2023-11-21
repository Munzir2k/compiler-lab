import java.util.StringTokenizer;
public class token_text
{
    public static void main(String[] args)
    {
        String input = "This is the given sentence for tokenization";
        StringTokenizer tokenizer = new StringTokenizer(input,"+* ",true);

        while(tokenizer.hasMoreTokens())
        {
            String token = tokenizer.nextToken();
            if(! token.isEmpty())
            {
                System.out.print("['"+token+"']");
            }
        }
    }
}