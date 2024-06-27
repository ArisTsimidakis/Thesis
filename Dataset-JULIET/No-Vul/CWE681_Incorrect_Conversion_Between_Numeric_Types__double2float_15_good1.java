class VAR1{
    private void FUN1() throws Throwable
        {
            switch (8)
            {
            case 7:
                
                VAR2.writeLine("");
                break;
            default:
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    double VAR5 = 0;
                    VAR2.writeString("");
                    try
                    {
                        VAR5 = VAR6.parseDouble(VAR3.readLine());
                    }
                    catch (NumberFormatException VAR7)
                    {
                        VAR2.writeLine("");
                    }
                    
                    if (VAR5 > VAR8.VAR9 || VAR5 < VAR8.VAR10)
                    {
                        VAR2.writeLine("");
                        return;
                    }
                    VAR2.writeLine("" + (float)VAR5);
                }
                catch (IOException VAR11)
                {
                    VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                }
                finally
                {
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR2.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
                }
                break;
            }
        }
};