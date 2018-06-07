//
//  TicketTableViewCell.h
//  AviaSales
//
//  Created by Алексей Борисов on 06.06.2018.
//  Copyright © 2018 Aleksey Borisov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataManager.h"
#import "APIManager.h"
#import "Ticket.h"
#import "CoreDataHelper.h"
#import "FavoriteTicket+CoreDataClass.h"

@interface TicketTableViewCell : UITableViewCell

@property (nonatomic, strong) UIImageView *airlineLogoView;
@property (nonatomic, strong) FavoriteTicket *favoriteTicket;
@property (nonatomic, strong) Ticket *ticket;

@end
