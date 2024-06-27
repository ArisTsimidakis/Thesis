class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                
                {
                    ServerSocket VAR4 = null;
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    
                    try
                    {
                        VAR4 = new FUN2(39543);
                        VAR5 = VAR4.accept();
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
    
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR13)
            {
                
                VAR9.writeLine("");
            }
            else
            {
    
                String VAR14 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
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
                    
                    String VAR16 = VAR17.FUN4(VAR15[0]);
                    String VAR18 = VAR17.FUN4(VAR15[1]);
                    
                    XPath VAR19 = VAR20.FUN5().FUN6();
                    InputSource VAR21 = new FUN7(VAR14);
                    String VAR22 = "
                                   "" + VAR18 + "" +
                                   "";
                    String VAR23 = (String)VAR19.FUN8(VAR22, VAR21, VAR24.VAR25);
                }
    
            }
        }
};