class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    try
                    {
                        
                        VAR5 = new Socket("", 39544);
                        
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
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR12)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                String VAR13 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR13 = "";
                }
                else
                {
                    
                    VAR13 = "";
                }
    
                if (VAR2 != null)
                {
                    
                    String [] VAR14 = VAR2.split("");
                    if( VAR14.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR15 = VAR16.FUN3(VAR14[0]);
                    String VAR17 = VAR16.FUN3(VAR14[1]);
                    
                    XPath VAR18 = VAR19.FUN4().FUN5();
                    InputSource VAR20 = new FUN6(VAR13);
                    String VAR21 = "
                                   "" + VAR17 + "" +
                                   "";
                    String VAR22 = (String)VAR18.FUN7(VAR21, VAR20, VAR23.VAR24);
                }
    
            }
        }
};