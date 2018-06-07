//
//  NSString+Localize.m
//  AviaTickets
//
//  Created by Алексей Борисов on 07.06.2018.
//  Copyright © 2018 Aleksey Borisov. All rights reserved.
//

#import "NSString+Localize.h"

@implementation NSString (Localize)

- (NSString *)localize {
    return NSLocalizedString(self, "");
}

@end
