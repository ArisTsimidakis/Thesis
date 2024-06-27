class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                
                
                VAR2 = System.FUN3("");
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            VAR4<String, String> VAR5 = new VAR4<String, String>();
            VAR5.FUN4(VAR6.VAR7,"");
            VAR5.FUN4(VAR6.VAR8, "VAR9:
            DirContext VAR10 = null;
    
            try
            {
                VAR10 = new FUN5(VAR5);
                
                String VAR11 = "" + VAR2 + "";
    
                VAR12<VAR13> VAR14 = VAR10.FUN6("", VAR11, null);
                while (VAR14.FUN7())
                {
                    SearchResult VAR15 = VAR14.next();
                    Attributes VAR16 = VAR15.FUN8();
                    VAR12<?> VAR17 = VAR16.FUN9();
                    while (VAR17.FUN7())
                    {
                        Attribute VAR18 = (VAR19) VAR17.next();
                        VAR12<?> VAR20 = VAR18.FUN9();
                        while(VAR20.FUN7())
                        {
                            VAR3.writeLine("" + VAR20.next().FUN10());
                        }
                    }
                }
            }
            catch (NamingException VAR21)
            {
                VAR3.VAR22.log(VAR23.VAR24, "", VAR21);
            }
            finally
            {
                if (VAR10 != null)
                {
                    try
                    {
                        VAR10.close();
                    }
                    catch (NamingException VAR21)
                    {
                        VAR3.VAR22.log(VAR23.VAR24, "", VAR21);
                    }
                }
            }
    
        }
};