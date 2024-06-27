class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = VAR4.VAR5; 
                
                
                {
                    String VAR6 = System.FUN3("");
                    if (VAR6 != null) 
                    {
                        try
                        {
                            VAR2 = VAR4.parseInt(VAR6.trim());
                        }
                        catch(NumberFormatException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.FUN4())
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR11 = new File("");
                    FileOutputStream VAR12 = new FileOutputStream(VAR11);
                    OutputStreamWriter VAR13 = new FUN5(VAR12, "");
                    BufferedWriter VAR14 = new BufferedWriter(VAR13);
                    int VAR15;
                    for (VAR15 = 0; VAR15 < VAR2; VAR15++)
                    {
                        try
                        {
                            VAR14.write("");
                        }
                        catch (IOException VAR16)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR16);
                        }
                    }
                    
                    try
                    {
                        if (VAR14 != null)
                        {
                            VAR14.close();
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR16);
                    }
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR16);
                    }
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR16);
                    }
                }
    
            }
        }
};