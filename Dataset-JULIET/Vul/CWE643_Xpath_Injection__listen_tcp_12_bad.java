class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    ServerSocket VAR4 = null;
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    
                    try
                    {
                        VAR4 = new FUN3(39543);
                        VAR5 = VAR4.accept();
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                String VAR12 = null;
                if(System.FUN4("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR12 = "";
                }
                else
                {
                    
                    VAR12 = "";
                }
                if (VAR2 != null)
                {
                    
                    String [] VAR13 = VAR2.split("");
                    if (VAR13.length < 2)
                    {
                        return;
                    }
                    String VAR14 = VAR13[0];
                    String VAR15 = VAR13[1];
                    
                    XPath VAR16 = VAR17.FUN5().FUN6();
                    InputSource VAR18 = new FUN7(VAR12);
                    
                    
                    String VAR19 = "
                                   "" + VAR15 + "" +
                                   "";
                    String VAR20 = (String)VAR16.FUN8(VAR19, VAR18, VAR21.VAR22);
                }
            }
            else
            {
    
                String VAR12 = null;
                if(System.FUN4("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR12 = "";
                }
                else
                {
                    
                    VAR12 = "";
                }
    
                if (VAR2 != null)
                {
                    
                    String [] VAR13 = VAR2.split("");
                    if( VAR13.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR14 = VAR23.FUN9(VAR13[0]);
                    String VAR15 = VAR23.FUN9(VAR13[1]);
                    
                    XPath VAR16 = VAR17.FUN5().FUN6();
                    InputSource VAR18 = new FUN7(VAR12);
                    String VAR19 = "
                                   "" + VAR15 + "" +
                                   "";
                    String VAR20 = (String)VAR16.FUN8(VAR19, VAR18, VAR21.VAR22);
                }
    
            }
        }
};