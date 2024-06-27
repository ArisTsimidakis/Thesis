class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                
                {
                    Socket VAR3 = null;
                    BufferedReader VAR4 = null;
                    InputStreamReader VAR5 = null;
                    try
                    {
                        
                        VAR3 = new Socket("", 39544);
                        
                        VAR5 = new InputStreamReader(VAR3.getInputStream(), "");
                        VAR4 = new BufferedReader(VAR5);
                        
                        VAR2 = VAR4.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
    
                        
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN3())
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                String VAR11 = null;
                if(System.FUN4("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR11 = "";
                }
                else
                {
                    
                    VAR11 = "";
                }
    
                if (VAR2 != null)
                {
                    
                    String [] VAR12 = VAR2.split("");
                    if( VAR12.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR13 = VAR14.FUN5(VAR12[0]);
                    String VAR15 = VAR14.FUN5(VAR12[1]);
                    
                    XPath VAR16 = VAR17.FUN6().FUN7();
                    InputSource VAR18 = new FUN8(VAR11);
                    String VAR19 = "
                                   "" + VAR15 + "" +
                                   "";
                    String VAR20 = (String)VAR16.FUN9(VAR19, VAR18, VAR21.VAR22);
                }
    
            }
        }
};