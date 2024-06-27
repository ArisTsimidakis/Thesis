class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try
            {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                int VAR5 = (VAR6)VAR4.readObject();
    
                File VAR7 = new File("");
                FileOutputStream VAR8 = new FileOutputStream(VAR7);
                OutputStreamWriter VAR9 = new FUN3(VAR8, "");
                BufferedWriter VAR10 = new BufferedWriter(VAR9);
                int VAR11;
    
                
                for (VAR11 = 0; VAR11 < VAR5; VAR11++)
                {
                    try
                    {
                        VAR10.write("");
                    }
                    catch (IOException VAR12)
                    {
                        VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                    }
                }
    
                
                try
                {
                    if (VAR10 != null)
                    {
                        VAR10.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
    
                try
                {
                    if (VAR9 != null)
                    {
                        VAR9.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
    
                try
                {
                    if (VAR8 != null)
                    {
                        VAR8.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
    
            }
            catch (IOException VAR12)
            {
                VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
            }
            catch (ClassNotFoundException VAR17)
            {
                VAR13.VAR14.log(VAR15.VAR16, "", VAR17);
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
                catch (IOException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR13.VAR14.log(VAR15.VAR16, "", VAR12);
                }
            }
        }
};