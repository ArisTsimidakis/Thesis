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
    
                String VAR6;
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
                    
                    File VAR7 = new File(VAR6 + VAR5);
                    FileInputStream VAR8 = null;
                    InputStreamReader VAR9 = null;
                    BufferedReader VAR10 = null;
                    if (VAR7.exists() && VAR7.isFile())
                    {
                        try
                        {
                            VAR8 = new FileInputStream(VAR7);
                            VAR9 = new InputStreamReader(VAR8, "");
                            VAR10 = new BufferedReader(VAR9);
                            VAR11.writeLine(VAR10.readLine());
                        }
                        catch (IOException VAR12)
                        {
                            VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                        }
                        finally
                        {
                            
                            try
                            {
                                if (VAR10 != null)
                                {
                                    VAR10.close();
                                }
                            }
                            catch (IOException VAR12)
                            {
                                VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
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
                                VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
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
                                VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                            }
                        }
                    }
                }
    
            }
            catch (IOException VAR12)
            {
                VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
            }
            catch (ClassNotFoundException VAR16)
            {
                VAR11.VAR13.log(VAR14.VAR15, "", VAR16);
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
                    VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
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
                    VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                }
            }
        }
};