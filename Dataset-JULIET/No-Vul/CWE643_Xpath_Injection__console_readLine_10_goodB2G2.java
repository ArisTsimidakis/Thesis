class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR5 = null;
                    BufferedReader VAR6 = null;
                    
                    try
                    {
                        VAR5 = new InputStreamReader(System.in, "");
                        VAR6 = new BufferedReader(VAR5);
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
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
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4)
            {
                String VAR11 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
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