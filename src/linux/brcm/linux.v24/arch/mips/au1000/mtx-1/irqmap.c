/*
 * BRIEF MODULE DESCRIPTION
 *	Au1xxx irq map table
 *
 * Copyright 2003 Embedded Edge, LLC
 *		dan@embeddededge.com
 *
 *  This program is free software; you can redistribute	 it and/or modify it
 *  under  the terms of	 the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the	License, or (at your
 *  option) any later version.
 *
 *  THIS  SOFTWARE  IS PROVIDED	  ``AS	IS'' AND   ANY	EXPRESS OR IMPLIED
 *  WARRANTIES,	  INCLUDING, BUT NOT  LIMITED  TO, THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
 *  NO	EVENT  SHALL   THE AUTHOR  BE	 LIABLE FOR ANY	  DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED	  TO, PROCUREMENT OF  SUBSTITUTE GOODS	OR SERVICES; LOSS OF
 *  USE, DATA,	OR PROFITS; OR	BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN	 CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  You should have received a copy of the  GNU General Public License along
 *  with this program; if not, write  to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 */
#include <linux/errno.h>
#include <linux/init.h>
#include <linux/irq.h>
#include <linux/kernel_stat.h>
#include <linux/module.h>
#include <linux/signal.h>
#include <linux/sched.h>
#include <linux/types.h>
#include <linux/interrupt.h>
#include <linux/ioport.h>
#include <linux/timex.h>
#include <linux/slab.h>
#include <linux/random.h>
#include <linux/delay.h>

#include <asm/bitops.h>
#include <asm/bootinfo.h>
#include <asm/io.h>
#include <asm/mipsregs.h>
#include <asm/system.h>
#include <asm/au1000.h>

/* Need to define this.
*/
au1xxx_irq_map_t au1xxx_irq_map[] = {
	{ 0, 0, 0}
};

int au1xxx_nr_irqs = 0;

#ifdef CONFIG_PCI

#define INTA AU1000_PCI_INTA
#define INTB AU1000_PCI_INTB
#define INTC AU1000_PCI_INTC
#define INTD AU1000_PCI_INTD
#define INTX 0xFF /* not valid */

int __init
au1xxx_pci_irqmap(struct pci_dev *dev, unsigned char idsel, unsigned char pin)
{
	static char pci_irq_table[][4] =
	/*
	 *	PCI IDSEL/INTPIN->INTLINE
	 *	A       B       C       D
	 */
	{
		{INTA, INTB, INTX, INTX},   /* IDSEL 0 */
		{INTB, INTA, INTX, INTX},   /* IDSEL 1 */
		{INTC, INTD, INTX, INTX},   /* IDSEL 2 */
		{INTD, INTC, INTX, INTX},   /* IDSEL 3 */
	};
	const long min_idsel = 0, max_idsel = 3, irqs_per_slot = 4;
	return PCI_IRQ_TABLE_LOOKUP;
};
#endif
