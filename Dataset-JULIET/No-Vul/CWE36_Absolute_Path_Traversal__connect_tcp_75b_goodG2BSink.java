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
    
                
                if (VAR5 != null)
                {
                    File VAR6 = new File(VAR5);
                    FileInputStream VAR7 = null;
                    InputStreamReader VAR8 = null;
                    BufferedReader VAR9 = null;
                    if (VAR6.exists() && VAR6.isFile())
                    {
                        try
                        {
                            VAR7 = new FileInputStream(VAR6);
                            VAR8 = new InputStreamReader(VAR7, "");
                            VAR9 = new BufferedReader(VAR8);
                            VAR10.writeLine(VAR9.readLine());
                        }
                        catch (IOException VAR11)
                        {
                            VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                        }
                        finally
                        {
                            
                            try
                            {
                                if (VAR9 != null)
                                {
                                    VAR9.close();
                                }
                            }
                            catch (IOException VAR11)
                            {
                                VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
    
                            try
                            {
                                if (VAR8 != null)
                                {
                                    VAR8.close();
                                }
                            }
                            catch (IOException VAR11)
                            {
                                VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
    
                            try
                            {
                                if (VAR7 != null)
                                {
                                    VAR7.close();
                                }
                            }
                            catch (IOException VAR11)
                            {
                                VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
                        }
                    }
                }
    
            }
            catch (IOException VAR11)
            {
                VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
            }
            catch (ClassNotFoundException VAR15)
            {
                VAR10.VAR12.log(VAR13.VAR14, "", VAR15);
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
                catch (IOException VAR11)
                {
                    VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR11)
                {
                    VAR10.VAR12.log(VAR13.VAR14, "", VAR11);
                }
            }
        }
};