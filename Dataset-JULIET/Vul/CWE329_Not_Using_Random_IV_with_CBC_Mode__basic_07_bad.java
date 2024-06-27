class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                byte[] VAR3 = "".getBytes("");
                byte[] VAR4 =
                {
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
                };
                KeyGenerator VAR5 = VAR6.FUN2("");
                VAR5.FUN3(128);
                SecretKey VAR7 = VAR5.FUN4();
                
                Cipher VAR8 = VAR9.FUN2("");
                IvParameterSpec VAR10 = new FUN5(VAR4);
                VAR8.FUN3(VAR9.VAR11, VAR7, VAR10);
                VAR12.writeLine(VAR12.FUN6(VAR8.FUN7(VAR3)));
            }
        }
};