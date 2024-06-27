class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
    
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
    
                        
                        VAR3 = VAR5.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
                
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                String VAR11 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR11 = "";
                }
                else
                {
                    
                    VAR11 = "";
                }
    
                if (VAR3 != null)
                {
                    
                    String [] VAR12 = VAR3.split("");
                    if( VAR12.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR13 = VAR14.FUN3(VAR12[0]);
                    String VAR15 = VAR14.FUN3(VAR12[1]);
                    
                    XPath VAR16 = VAR17.FUN4().FUN5();
                    InputSource VAR18 = new FUN6(VAR11);
                    String VAR19 = "
                                   "" + VAR15 + "" +
                                   "";
                    String VAR20 = (String)VAR16.FUN7(VAR19, VAR18, VAR21.VAR22);
                }
    
            }
        }
};