class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = (new FUN2()).nextInt();
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR6 = new File("");
                    FileOutputStream VAR7 = new FileOutputStream(VAR6);
                    OutputStreamWriter VAR8 = new FUN3(VAR7, "");
                    BufferedWriter VAR9 = new BufferedWriter(VAR8);
                    int VAR10;
                    for (VAR10 = 0; VAR10 < VAR2; VAR10++)
                    {
                        try
                        {
                            VAR9.write("");
                        }
                        catch (IOException VAR11)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
                    }
                    
                    try
                    {
                        if (VAR9 != null)
                        {
                            VAR9.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR3.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
                    try
                    {
                        if (VAR8 != null)
                        {
                            VAR8.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR3.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
                    try
                    {
                        if (VAR7 != null)
                        {
                            VAR7.close();
                        }
                    }
                    catch (IOException VAR11)
                    {
                        VAR3.VAR12.log(VAR13.VAR14, "", VAR11);
                    }
                }
    
            }
        }
};