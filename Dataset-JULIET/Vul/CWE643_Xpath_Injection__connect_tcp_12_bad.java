class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Socket VAR4 = null;
                    BufferedReader VAR5 = null;
                    InputStreamReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new Socket("", 39544);
                        
                        VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                        VAR5 = new BufferedReader(VAR6);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if(VAR3.FUN2())
            {
                String VAR11 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
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
                    if (VAR12.length < 2)
                    {
                        return;
                    }
                    String VAR13 = VAR12[0];
                    String VAR14 = VAR12[1];
                    
                    XPath VAR15 = VAR16.FUN4().FUN5();
                    InputSource VAR17 = new FUN6(VAR11);
                    
                    
                    String VAR18 = "
                                   "" + VAR14 + "" +
                                   "";
                    String VAR19 = (String)VAR15.FUN7(VAR18, VAR17, VAR20.VAR21);
                }
            }
            else
            {
    
                String VAR11 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
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
                    
                    String VAR13 = VAR22.FUN8(VAR12[0]);
                    String VAR14 = VAR22.FUN8(VAR12[1]);
                    
                    XPath VAR15 = VAR16.FUN4().FUN5();
                    InputSource VAR17 = new FUN6(VAR11);
                    String VAR18 = "
                                   "" + VAR14 + "" +
                                   "";
                    String VAR19 = (String)VAR15.FUN7(VAR18, VAR17, VAR20.VAR21);
                }
    
            }
        }
};