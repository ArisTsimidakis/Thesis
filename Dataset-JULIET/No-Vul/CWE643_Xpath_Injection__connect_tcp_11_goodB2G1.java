class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
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
                
                VAR2 = null;
            }
    
            if (VAR3.FUN3())
            {
                
                VAR3.writeLine("");
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