class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (5==5)
            {
                VAR2 = VAR3.VAR4; 
                
                
                {
                    String VAR5 = System.FUN2("");
                    if (VAR5 != null) 
                    {
                        try
                        {
                            VAR2 = VAR3.parseInt(VAR5.trim());
                        }
                        catch(NumberFormatException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (5!=5)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR11 = new File("");
                    FileOutputStream VAR12 = new FileOutputStream(VAR11);
                    OutputStreamWriter VAR13 = new FUN3(VAR12, "");
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR16);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR16);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR16);
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
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR16);
                    }
                }
    
            }
        }
};