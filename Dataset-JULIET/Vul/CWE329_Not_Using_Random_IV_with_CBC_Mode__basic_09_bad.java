class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                byte[] VAR4 = "".getBytes("");
                byte[] VAR5 =
                {
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
                };
                KeyGenerator VAR6 = VAR7.FUN2("");
                VAR6.FUN3(128);
                SecretKey VAR8 = VAR6.FUN4();
                
                Cipher VAR9 = VAR10.FUN2("");
                IvParameterSpec VAR11 = new FUN5(VAR5);
                VAR9.FUN3(VAR10.VAR12, VAR8, VAR11);
                VAR2.writeLine(VAR2.FUN6(VAR9.FUN7(VAR4)));
            }
        }
};