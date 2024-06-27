void FUN1(struct VAR1 *VAR2, int VAR3)
{
	
	pthread_mutex_lock(&VAR2->VAR4->mutex);
	VAR2->VAR5 = VAR6;
	VAR2->VAR3 = VAR3;

	
	if(VAR2->VAR4->VAR7) {
		VAR2->VAR4->VAR7 = VAR6;
		FUN2(&VAR2->VAR4->VAR8);
	}

	pthread_mutex_unlock(&VAR2->VAR4->mutex);
}