// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _INT_MAIL_SQL_H_
#define _INT_MAIL_SQL_H_

int mail_return_timer( int tid, int64 tick, int id, intptr_t data );
int mail_delete_timer( int tid, int64 tick, int id, intptr_t data );

int inter_mail_parse_frommap(int fd);
bool mail_sendmail(int send_id, const char* send_name, int dest_id, const char* dest_name, const char* title, const char* body, int zeny, struct item *item, int amount);

int inter_mail_sql_init(void);
void inter_mail_sql_final(void);

int mail_savemessage(struct mail_message* msg);
void mapif_Mail_new(struct mail_message *msg);

#endif /* _INT_MAIL_SQL_H_ */
