class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (5==5)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR3 = null;
                    BufferedReader VAR4 = null;
                    
                    try
                    {
                        VAR3 = new InputStreamReader(System.in, "");
                        VAR4 = new BufferedReader(VAR3);
                        
                        VAR2 = VAR4.readLine();
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
    
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (5==5)
            {
                String VAR10 = null;
                if(System.FUN2("").toLowerCase().indexOf("") >= 0)
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
                    
                    String VAR12 = VAR13.FUN3(VAR11[0]);
                    String VAR14 = VAR13.FUN3(VAR11[1]);
                    
                    XPath VAR15 = VAR16.FUN4().FUN5();
                    InputSource VAR17 = new FUN6(VAR10);
                    String VAR18 = "
                                   "" + VAR14 + "" +
                                   "";
                    String VAR19 = (String)VAR15.FUN7(VAR18, VAR17, VAR20.VAR21);
                }
            }
        }
};