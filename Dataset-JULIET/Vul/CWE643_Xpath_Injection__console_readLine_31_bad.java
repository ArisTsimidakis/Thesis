class VAR1{
    public void FUN1() throws Throwable
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
                    if (VAR12.length < 2)
                    {
                        return;
                    }
                    String VAR13 = VAR12[0];
                    String VAR14 = VAR12[1];
                    
                    XPath VAR15 = VAR16.FUN3().FUN4();
                    InputSource VAR17 = new FUN5(VAR11);
                    
                    
                    String VAR18 = "
                                   "" + VAR14 + "" +
                                   "";
                    String VAR19 = (String)VAR15.FUN6(VAR18, VAR17, VAR20.VAR21);
                }
    
            }
        }
};