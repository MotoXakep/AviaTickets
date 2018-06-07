//
//  ProgressView.h
//  AviaTickets
//
//  Created by Алексей Борисов on 07.06.2018.
//  Copyright © 2018 Aleksey Borisov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProgressView : UIView

+ (instancetype)sharedInstance;

- (void)show:(void (^)(void))completion;
- (void)dismiss:(void (^)(void))completion;

@end

