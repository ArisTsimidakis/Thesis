class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3)
            {
                
                VAR2 = VAR4.VAR5;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR6)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR8 = new File("");
                    FileOutputStream VAR9 = new FileOutputStream(VAR8);
                    OutputStreamWriter VAR10 = new FUN2(VAR9, "");
                    BufferedWriter VAR11 = new BufferedWriter(VAR10);
                    int VAR12;
                    for (VAR12 = 0; VAR12 < VAR2; VAR12++)
                    {
                        try
                        {
                            VAR11.write("");
                        }
                        catch (IOException VAR13)
                        {
                            VAR7.VAR14.log(VAR15.VAR16, "", VAR13);
                        }
                    }
                    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR7.VAR14.log(VAR15.VAR16, "", VAR13);
                    }
                    try
                    {
                        if (VAR10 != null)
                        {
                            VAR10.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR7.VAR14.log(VAR15.VAR16, "", VAR13);
                    }
                    try
                    {
                        if (VAR9 != null)
                        {
                            VAR9.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR7.VAR14.log(VAR15.VAR16, "", VAR13);
                    }
                }
    
            }
        }
};