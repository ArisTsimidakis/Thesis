class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            VAR4<String, String> VAR5 = new VAR4<String, String>();
            VAR5.FUN3(VAR6.VAR7,"");
            VAR5.FUN3(VAR6.VAR8, "VAR9:
            DirContext VAR10 = null;
    
            try
            {
                VAR10 = new FUN4(VAR5);
                
                String VAR11 = "" + VAR2 + "";
    
                VAR12<VAR13> VAR14 = VAR10.FUN5("", VAR11, null);
                while (VAR14.FUN6())
                {
                    SearchResult VAR15 = VAR14.next();
                    Attributes VAR16 = VAR15.FUN7();
                    VAR12<?> VAR17 = VAR16.FUN8();
                    while (VAR17.FUN6())
                    {
                        Attribute VAR18 = (VAR19) VAR17.next();
                        VAR12<?> VAR20 = VAR18.FUN8();
                        while(VAR20.FUN6())
                        {
                            VAR3.writeLine("" + VAR20.next().FUN9());
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