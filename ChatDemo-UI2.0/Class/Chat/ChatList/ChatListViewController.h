/************************************************************
  *  * EaseMob CONFIDENTIAL 
  * __________________ 
  * Copyright (C) 2013-2014 EaseMob Technologies. All rights reserved. 
  *  
  * NOTICE: All information contained herein is, and remains 
  * the property of EaseMob Technologies.
  * Dissemination of this information or reproduction of this material 
  * is strictly forbidden unless prior written permission is obtained
  * from EaseMob Technologies.
  */

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
@class ChatListCell;
@interface ChatListViewController : BaseViewController
@property (strong, nonatomic,readonly) NSMutableArray        *dataSource;
@property (strong, nonatomic,readonly) UITableView           *tableView;
- (void)refreshDataSource;
-(void)hideSearchWidgets;
- (void)isConnect:(BOOL)isConnect;
- (void)networkChanged:(int)connectionState;
- (void)fetchUserInfoWithChatId:(NSString*)chatId
                    displayCell:(ChatListCell*)chatListCell;
@end
