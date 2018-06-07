//
//  TicketsViewController.h
//  AviaSales
//
//  Created by Алексей Борисов on 06.06.2018.
//  Copyright © 2018 Aleksey Borisov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TicketsViewController : UITableViewController

- (instancetype)initWithTickets:(NSArray *)tickets;
- (instancetype)initFavoriteTicketsController;

@end
