class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                {
                    File VAR5 = new File("");
                    FileInputStream VAR6 = null;
                    InputStreamReader VAR7 = null;
                    BufferedReader VAR8 = null;
                    try
                    {
                        
                        VAR6 = new FileInputStream(VAR5);
                        VAR7 = new InputStreamReader(VAR6, "");
                        VAR8 = new BufferedReader(VAR7);
                        
                        
                        VAR2 = VAR8.readLine();
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR13)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                String VAR14 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR14 = "";
                }
                else
                {
                    
                    VAR14 = "";
                }
    
                if (VAR2 != null)
                {
                    
                    String [] VAR15 = VAR2.split("");
                    if( VAR15.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR16 = VAR17.FUN3(VAR15[0]);
                    String VAR18 = VAR17.FUN3(VAR15[1]);
                    
                    XPath VAR19 = VAR20.FUN4().FUN5();
                    InputSource VAR21 = new FUN6(VAR14);
                    String VAR22 = "
                                   "" + VAR18 + "" +
                                   "";
                    String VAR23 = (String)VAR19.FUN7(VAR22, VAR21, VAR24.VAR25);
                }
    
            }
        }
};