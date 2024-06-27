class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
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
                String VAR10 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR10 = "";
                }
                else
                {
                    
                    VAR10 = "";
                }
                if (VAR2 != null)
                {
                    
                    String [] VAR11 = VAR2.split("");
                    if (VAR11.length < 2)
                    {
                        return;
                    }
                    String VAR12 = VAR11[0];
                    String VAR13 = VAR11[1];
                    
                    XPath VAR14 = VAR15.FUN4().FUN5();
                    InputSource VAR16 = new FUN6(VAR10);
                    
                    
                    String VAR17 = "
                                   "" + VAR13 + "" +
                                   "";
                    String VAR18 = (String)VAR14.FUN7(VAR17, VAR16, VAR19.VAR20);
                }
            }
            else
            {
    
                String VAR10 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR10 = "";
                }
                else
                {
                    
                    VAR10 = "";
                }
    
                if (VAR2 != null)
                {
                    
                    String [] VAR11 = VAR2.split("");
                    if( VAR11.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR12 = VAR21.FUN8(VAR11[0]);
                    String VAR13 = VAR21.FUN8(VAR11[1]);
                    
                    XPath VAR14 = VAR15.FUN4().FUN5();
                    InputSource VAR16 = new FUN6(VAR10);
                    String VAR17 = "
                                   "" + VAR13 + "" +
                                   "";
                    String VAR18 = (String)VAR14.FUN7(VAR17, VAR16, VAR19.VAR20);
                }
    
            }
        }
};