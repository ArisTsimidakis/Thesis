class VAR1{
    private void FUN1() throws Throwable
        {
            switch (7)
            {
            case 7:
                File VAR2 = null;
                FileInputStream VAR3 = null;
                InputStreamReader VAR4 = null;
                BufferedReader VAR5 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR2 = new File("");
                }
                else
                {
                    
                    VAR2 = new File("");
                }
                try
                {
                    VAR3 = new FileInputStream(VAR2);
                    VAR4 = new InputStreamReader(VAR3, "");
                    VAR5 = new BufferedReader(VAR4);
                }
                catch (FileNotFoundException VAR6)
                {
                    
                    VAR7.writeLine("" + VAR6.FUN3());
                    throw VAR6;
                }
                finally
                {
                    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
                break;
            default:
                
                VAR7.writeLine("");
                break;
            }
        }
};