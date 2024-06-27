class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = VAR5.VAR6; 
                
                
                {
                    String VAR7 = System.FUN2("");
                    try
                    {
                        VAR2 = VAR5.parseInt(VAR7.trim());
                    }
                    catch(NumberFormatException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR12)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    File VAR13 = new File("");
                    FileOutputStream VAR14 = new FileOutputStream(VAR13);
                    OutputStreamWriter VAR15 = new FUN3(VAR14, "");
                    BufferedWriter VAR16 = new BufferedWriter(VAR15);
                    int VAR17;
                    for (VAR17 = 0; VAR17 < VAR2; VAR17++)
                    {
                        try
                        {
                            VAR16.write("");
                        }
                        catch (IOException VAR18)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR18);
                        }
                    }
                    
                    try
                    {
                        if (VAR16 != null)
                        {
                            VAR16.close();
                        }
                    }
                    catch (IOException VAR18)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR18);
                    }
                    try
                    {
                        if (VAR15 != null)
                        {
                            VAR15.close();
                        }
                    }
                    catch (IOException VAR18)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR18);
                    }
                    try
                    {
                        if (VAR14 != null)
                        {
                            VAR14.close();
                        }
                    }
                    catch (IOException VAR18)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR18);
                    }
                }
    
            }
        }
};