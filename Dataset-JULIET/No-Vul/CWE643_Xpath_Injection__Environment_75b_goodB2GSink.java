class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try
            {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                String VAR5 = (String)VAR4.readObject();
    
                String VAR6 = null;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR6 = "";
                }
                else
                {
                    
                    VAR6 = "";
                }
    
                if (VAR5 != null)
                {
                    
                    String [] VAR7 = VAR5.split("");
                    if( VAR7.length < 2 )
                    {
                        return;
                    }
                    
                    String VAR8 = VAR9.FUN4(VAR7[0]);
                    String VAR10 = VAR9.FUN4(VAR7[1]);
                    
                    XPath VAR11 = VAR12.FUN5().FUN6();
                    InputSource VAR13 = new FUN7(VAR6);
                    String VAR14 = "
                                   "" + VAR10 + "" +
                                   "";
                    String VAR15 = (String)VAR11.FUN8(VAR14, VAR13, VAR16.VAR17);
                }
    
            }
            catch (IOException VAR18)
            {
                VAR19.VAR20.log(VAR21.VAR22, "", VAR18);
            }
            catch (ClassNotFoundException VAR23)
            {
                VAR19.VAR20.log(VAR21.VAR22, "", VAR23);
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
                catch (IOException VAR18)
                {
                    VAR19.VAR20.log(VAR21.VAR22, "", VAR18);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR18)
                {
                    VAR19.VAR20.log(VAR21.VAR22, "", VAR18);
                }
            }
        }
};